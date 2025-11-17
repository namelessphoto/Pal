#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalQuestBlock.h"
#include "PalQuestBlock_DefeatWildBoss.generated.h"

UCLASS()
class PAL_API UPalQuestBlock_DefeatWildBoss : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FName BossSpawnerName;
    
private:
    UPROPERTY()
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_DefeatWildBoss();

    UFUNCTION(BlueprintPure)
    FName GetTargetBossCharacterId() const;
    
    UFUNCTION(BlueprintPure)
    FName GetRemappedSpawnerName() const;
    
private:
    UFUNCTION()
    void CheckFlag();
    
};

