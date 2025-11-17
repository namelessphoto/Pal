#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalStageAreaVolume.h"
#include "PalDungeonAreaVolume.generated.h"

class AActor;

UCLASS()
class PAL_API APalDungeonAreaVolume : public APalStageAreaVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleInstanceOnly)
    FVector LevelWorldLocation;
    
    UPROPERTY(VisibleInstanceOnly)
    FRotator LevelWorldRotation;
    
public:
    APalDungeonAreaVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapActor(AActor* Other);
    
};

