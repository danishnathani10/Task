// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "DoorActor.generated.h"

class UCurveFloat;

UCLASS()
class TASK_2323_26422_API ADoorActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoorActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere)
		class USceneComponent* root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* base;

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* handle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool open;

	UFUNCTION()
		void OpenDoor();

	FTimeline MyTimeline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UCurveFloat* FloatCurve;

	UFUNCTION()
		void TimelineUpdateCallback(float val);

	UFUNCTION()
		void TimelineFinishedCallback();
};
