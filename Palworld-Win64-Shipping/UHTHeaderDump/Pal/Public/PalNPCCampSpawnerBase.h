#pragma once
#include "CoreMinimal.h"
#include "PalEnemyCampStatus.h"
#include "PalLevelObjectActor.h"
#include "PalNPCCampSpawnerBase.generated.h"

UCLASS(Abstract)
class PAL_API APalNPCCampSpawnerBase : public APalLevelObjectActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName CampSpawnerName;
    
    APalNPCCampSpawnerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FName GetRewardName();
    
    UFUNCTION(BlueprintPure)
    float CalcRemainRespawnTime(const FPalEnemyCampStatus& CampStatus) const;
    
    UFUNCTION(BlueprintPure)
    float CalcRemainDespawnTime(const FPalEnemyCampStatus& CampStatus) const;
    
};

