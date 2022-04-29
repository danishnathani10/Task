// Fill out your copyright notice in the Description page of Project Settings.


#include "LeverActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Task_2323_26422Character.h"
#include "Blueprint/UserWidget.h"
#include "DoorActor.h"
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>
#include "Net/UnrealNetwork.h"

// Sets default values
ALeverActor::ALeverActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SetReplicates(true);
	
	root = CreateDefaultSubobject<USceneComponent>(TEXT("root"));
	root->SetupAttachment(RootComponent);

	base = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("base"));
	base->SetupAttachment(root);

	handle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("handle"));
	handle->SetupAttachment(base);

	boxcol = CreateDefaultSubobject<UBoxComponent>(TEXT("boxcol"));
	boxcol->SetupAttachment(root);
	boxcol->SetBoxExtent(FVector(100.0f, 100.0f, 35.5f));
	boxcol->OnComponentBeginOverlap.AddDynamic(this, &ALeverActor::OnOverlapBegin);
	boxcol->OnComponentEndOverlap.AddDynamic(this, &ALeverActor::OnOverlapEnd);

	static ConstructorHelpers::FObjectFinder<UCurveFloat> Curve(TEXT("/Game/OtherActors/OpenCurve"));
	check(Curve.Succeeded());
	FloatCurve = Curve.Object;

	FOnTimelineFloat pgUpdate;
	FOnTimelineEventStatic pgFinish;

	pgUpdate.BindUFunction(this, FName("TimelineUpdateCallback"));
	pgFinish.BindUFunction(this, FName("TimelineFinishedCallback"));
	MyTimeline.AddInterpFloat(FloatCurve, pgUpdate);
	MyTimeline.SetTimelineFinishedFunc(pgFinish);

	MyTimeline.SetTimelineLength(0.5f);
	MyTimeline.SetLooping(false);
	
}

// Called when the game starts or when spawned
void ALeverActor::BeginPlay()
{
	Super::BeginPlay();
	
	LeverToggle();
}

// Called every frame
void ALeverActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MyTimeline.TickTimeline(DeltaTime);
	
}

void ALeverActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Overlapping(true, OtherActor);

	ATask_2323_26422Character* sw = Cast<ATask_2323_26422Character>(OtherActor);
	if (sw)
		isIn = true;
}

void ALeverActor::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Overlapping(false, OtherActor);

	ATask_2323_26422Character* sw = Cast<ATask_2323_26422Character>(OtherActor);
	if (sw)
		isIn = false;
}

void ALeverActor::LeverToggle()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, FString("Closed"));
	MyTimeline.PlayFromStart();

	/*if (isClosed)
	{
		base->SetRelativeRotation(FMath::Lerp(base->GetRelativeRotation(), FRotator(30, 0, 00), 1));
	}
	else 
	{
		base->SetRelativeRotation(FMath::Lerp(base->GetRelativeRotation(), FRotator(-30, 0, 0), 1));
	}
	isClosed = !isClosed;

	TSubclassOf<ADoorActor> ClassToFind;
	ClassToFind = ADoorActor::StaticClass();
	AActor* act = UGameplayStatics::GetActorOfClass(GetWorld(), ClassToFind);
	ADoorActor* door = Cast<ADoorActor>(act);

	if (door)
	{
		door->OpenDoor();
	}*/
}

void ALeverActor::TimelineUpdateCallback(float val)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, FString::SanitizeFloat(val));
	if (isClosed)
	{
		base->SetRelativeRotation(FMath::Lerp(base->GetRelativeRotation(), FRotator(30, 0, 0), val));
	}
	else
	{
		base->SetRelativeRotation(FMath::Lerp(base->GetRelativeRotation(), FRotator(-30, 0, 0), val));
	}
}

void ALeverActor::TimelineFinishedCallback()
{
	isClosed = !isClosed;

	TSubclassOf<ADoorActor> ClassToFind;
	ClassToFind = ADoorActor::StaticClass();
	AActor* act = UGameplayStatics::GetActorOfClass(GetWorld(), ClassToFind);
	ADoorActor* door = Cast<ADoorActor>(act);

	if (door)
	{
		door->OpenDoor();
	}

	//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, FString("Closed"));
}



