#pragma once
#include "CoreMinimal.h"
#include "EPalArenaPlayerIndex.h"
#include "PalArenaSequenceBase.h"
#include "PalArenaSequenceInBattle.generated.h"

class UPalArenaOutAreaChecker;

UCLASS()
class UPalArenaSequenceInBattle : public UPalArenaSequenceBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UPalArenaOutAreaChecker* OutAreaChecker;
    
public:
    UPalArenaSequenceInBattle();

protected:
    UFUNCTION(BlueprintCallable)
    void SetupPalHate();
    
    UFUNCTION()
    void SetDisableRide(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void ResetPalHate();
    
public:
    UFUNCTION()
    void OnEndSequence_Implementation();
    
    UFUNCTION()
    void OnBeginSequence_Implementation();
    
private:
    UFUNCTION(BlueprintPure)
    bool IsPlayerLose(EPalArenaPlayerIndex PlayerIndex);
    
    UFUNCTION(BlueprintPure)
    int32 GetAlivePalNum(EPalArenaPlayerIndex PlayerIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisableCaptureForSoloNPC();
    
    UFUNCTION(BlueprintCallable)
    bool CheckBattleResult(bool bIsTimeup);
    
    UFUNCTION(BlueprintCallable)
    void ActivateAI();
    
};

