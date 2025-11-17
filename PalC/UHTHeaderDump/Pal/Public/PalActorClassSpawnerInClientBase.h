#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalActorClassSpawnerInClientBase.generated.h"

UCLASS(Abstract)
class PAL_API APalActorClassSpawnerInClientBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<AActor> TargetClass;
    
    UPROPERTY()
    AActor* SpawnedActor;
    
public:
    APalActorClassSpawnerInClientBase(const FObjectInitializer& ObjectInitializer);

};

