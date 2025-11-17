#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalArenaPlayer.h"
#include "EPalAudioStateGroup.h"
#include "PalArenaTestParameter.h"
#include "PalDebugOtomoPalInfo.h"
#include "PalArenaTestManager.generated.h"

class APalPlayerState;
class APlayerState;
class UPalOtomoHolderComponentBase;

UCLASS()
class PAL_API APalArenaTestManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalArenaTestParameter TestParameter;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<APalPlayerState*> PlayerStates;
    
    UPROPERTY(BlueprintReadOnly)
    APalPlayerState* Player1;
    
    UPROPERTY(BlueprintReadOnly)
    APalPlayerState* Player2;
    
public:
    APalArenaTestManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleRandomPartyMode();
    
private:
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION()
    void SendClientStart();
    
    UFUNCTION()
    void SendClientSetup();
    
    UFUNCTION()
    void RidePlayer(APalPlayerState* PlayerState, int32 RideIndex);
    
    UFUNCTION()
    void PlayBGM(EPalAudioStateGroup StateGroup);
    
    UFUNCTION()
    void OtomoInitializeTimer_Server();
    
    UFUNCTION()
    void OtomoInitializeTimer_Client();
    
    UFUNCTION()
    void LoadWaza_Client();
    
    UFUNCTION()
    bool IsOtomoActorInitialized(const APlayerState* PlayerState) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InactivatePlayerOtomoPal();
    
    UFUNCTION(BlueprintPure)
    TArray<FTransform> GetPalSpawnTransform(EPalArenaPlayer ArenaPlayer) const;
    
private:
    UFUNCTION()
    UPalOtomoHolderComponentBase* GetOtomoHolder(const APlayerState* TargetPlayerState) const;
    
    UFUNCTION()
    void GetOffAllPlayer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnemyCombatMode();
    
private:
    UFUNCTION()
    void DelayRidePlayer();
    
    UFUNCTION()
    TArray<FPalDebugOtomoPalInfo> CreateRandomParty() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivatePlayerOtomoPal();
    
};

