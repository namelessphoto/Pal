#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "PalWorkBase.h"
#include "PalWorkMonsterFarm.generated.h"

UCLASS()
class PAL_API UPalWorkMonsterFarm : public UPalWorkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFloatInterval ActionIntervalSeconds;
    
public:
    UPalWorkMonsterFarm();

};

