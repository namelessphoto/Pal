#pragma once
#include "CoreMinimal.h"
#include "PalCharacter.h"
#include "PalDeadInfo.h"
#include "PalNPC.generated.h"

class UPalNPCWeaponGenerator;

UCLASS()
class PAL_API APalNPC : public APalCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    UPalNPCWeaponGenerator* WeaponGenerator;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsEnableJumpEffect;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 DefaultVoiceID;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsScarecrow;
    
public:
    APalNPC(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void RemoveEnemyFromBattleManager(FPalDeadInfo DeadInfo);
    
    UFUNCTION()
    void OnCompletedInitParam(APalCharacter* InCharacter);
    
    UFUNCTION()
    void MasterWazaUpdateWhenLevelUp(int32 addLevel, int32 nowLevel);
    
    UFUNCTION()
    void MasterWazaSetup(APalCharacter* InCharacter);
    
};

