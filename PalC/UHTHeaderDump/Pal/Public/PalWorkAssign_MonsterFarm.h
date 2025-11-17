#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FloatCounter.h"
#include "PalStaticItemIdAndNum.h"
#include "PalWorkAssign.h"
#include "PalWorkAssign_MonsterFarm.generated.h"

UCLASS()
class PAL_API UPalWorkAssign_MonsterFarm : public UPalWorkAssign {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFloatCounter ActionIntervalTimer;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector WalkTargetLocation;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalStaticItemIdAndNum SpawnItemInfoPerAction;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 SpawnActionWholeCount;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 SpawnActionCurrentCount;
    
public:
    UPalWorkAssign_MonsterFarm();

};

