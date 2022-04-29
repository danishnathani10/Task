// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorActor.h"

// Sets default values
ADoorActor::ADoorActor()
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
void ADoorActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	MyTimeline.TickTimeline(DeltaTime);

}

void ADoorActor::OpenDoor()
{
	MyTimeline.PlayFromStart();
	/*if (open)
	{
		base->SetRelativeRotation(FMath::Lerp(base->GetRelativeRotation(), FRotator(0, 0, -90), 1));
	}
	else
	{
		base->SetRelativeRotation(FMath::Lerp(base->GetRelativeRotation(), FRotator(0, 0, 0), 1));
	}
	open = !open;*/
}

void ADoorActor::TimelineUpdateCallback(float val)
{
	if (open)
	{
		base->SetRelativeRotation(FMath::Lerp(base->GetRelativeRotation(), FRotator(0, -90, 0), val));
	}
	else
	{
		base->SetRelativeRotation(FMath::Lerp(base->GetRelativeRotation(), FRotator(0, 0, 0), val));
	}
}

void ADoorActor::TimelineFinishedCallback()
{
	open = !open;
}

