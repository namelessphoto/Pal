#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalStageAreaBounds.generated.h"

UCLASS()
class PAL_API APalStageAreaBounds : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleInstanceOnly)
    FVector LevelLocation;
    
    UPROPERTY(VisibleInstanceOnly)
    FRotator LevelRotation;
    
public:
    APalStageAreaBounds(const FObjectInitializer& ObjectInitializer);

};

