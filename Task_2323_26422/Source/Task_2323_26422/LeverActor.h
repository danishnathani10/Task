// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "LeverActor.generated.h"

class UCurveFloat;

UCLASS()
class TASK_2323_26422_API ALeverActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALeverActor();

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

	UPROPERTY(EditAnywhere)
		class UBoxComponent* boxcol;

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isIn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isClosed = true;

	UFUNCTION(BlueprintImplementableEvent)
		void Overlapping(bool isOverlaped, class AActor* otherActor);

	UFUNCTION(BlueprintCallable)
		void LeverToggle();


		FTimeline MyTimeline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UCurveFloat* FloatCurve;

	UFUNCTION()
		void TimelineUpdateCallback(float val);

	UFUNCTION()
		void TimelineFinishedCallback();

};
