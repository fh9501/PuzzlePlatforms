// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API AMovingPlatform : public AStaticMeshActor
{
    GENERATED_BODY()

public:
    AMovingPlatform();

    void Tick(float DeltaSeconds) override;

protected:
    void BeginPlay() override;

private:
    UPROPERTY(EditAnywhere)
    FVector Velocity = FVector(20, 0, 0);
};