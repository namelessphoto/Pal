#pragma once
#include "CoreMinimal.h"
#include "EPalWazaID.h"
#include "PalActionBase.h"
#include "PalActionWazaBase.generated.h"

class APalPlayerCharacter;
class UAkAudioEvent;
class UPalSoundPlayer;

UCLASS()
class PAL_API UPalActionWazaBase : public UPalActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EPalWazaID WazaID;
    
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsDisableTickOptimization;
    
private:
    UPROPERTY()
    UPalSoundPlayer* SoundPlayer;
    
    UPROPERTY(EditDefaultsOnly)
    bool bApplyFullStomachCost;
    
public:
    UPalActionWazaBase();

    UFUNCTION(BlueprintCallable)
    void StopAkSound();
    
    UFUNCTION(BlueprintCallable)
    void PlayAkSound(UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintPure)
    EPalWazaID GetWazaID() const;
    
    UFUNCTION(BlueprintPure)
    APalPlayerCharacter* GetRiderPlayer();
    
};

