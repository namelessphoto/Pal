#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalArenaPlayerIndex.h"
#include "EPalArenaSequenceType.h"
#include "EPalArenaSequencerOwnerType.h"
#include "GameDateTime.h"
#include "OnPalSelectedDelegateDelegate.h"
#include "PalArenaBattleResultInfo.h"
#include "PalArenaPlayerInfo.h"
#include "PalArenaPlayerParty.h"
#include "PalArenaSequencerInitializeParameter.h"
#include "Templates/SubclassOf.h"
#include "PalArenaSequencer.generated.h"

class APalCharacter;
class APalPlayerCharacter;
class UPalArenaCharacterRefresher;
class UPalArenaInstanceModel;
class UPalArenaSequenceBase;
class UPalArenaSequencer;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;

UCLASS(BlueprintType)
class PAL_API UPalArenaSequencer : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSequenceChangedDelegate, UPalArenaSequencer*, Self, EPalArenaSequenceType, PrevType, EPalArenaSequenceType, AfterType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerInfoInitializedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPartyUpdatedDelegate, EPalArenaPlayerIndex, PlayerIndex, FPalArenaPlayerParty, NewParty);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeleteDelegate, UPalArenaSequencer*, Self);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterDeadDelegate, APalCharacter*, DeadCharacter);
    
    UPROPERTY(BlueprintAssignable)
    FOnCharacterDeadDelegate OnCharacterDeadDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSequenceChangedDelegate OnSequenceChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnDeleteDelegate OnDeleteDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPartyUpdatedDelegate OnPartyUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerInfoInitializedDelegate OnPlayerInfoInitialized;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    FPalArenaBattleResultInfo BattleResultInfo;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsBattlePlayerRemoved;
    
    UPROPERTY(BlueprintReadOnly)
    bool bPlayerInfoInitialized;
    
    UPROPERTY(Transient)
    TMap<EPalArenaPlayerIndex, FPalArenaPlayerInfo> ArenaPlayerInfoMap;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalArenaSequenceType, TSubclassOf<UPalArenaSequenceBase>> SequenceClassMap;
    
    UPROPERTY(Transient)
    TArray<UPalArenaSequenceBase*> SequenceList;
    
    UPROPERTY(Transient)
    UPalArenaInstanceModel* ArenaInstanceModel;
    
    UPROPERTY(Transient)
    UPalArenaSequenceBase* CurrentSequence;
    
    UPROPERTY(Transient)
    TArray<UPalIndividualCharacterHandle*> InArenaPlayerHandles;
    
    UPROPERTY(Transient)
    UPalArenaCharacterRefresher* CharacterRefresher;
    
    UPROPERTY(Transient)
    TArray<FGuid> SequenceEndPlayers;
    
    UPROPERTY()
    FGameDateTime ServerSequenceBeginTime_Client;
    
public:
    UPalArenaSequencer();

    UFUNCTION()
    void StartSequencer(const FPalArenaSequencerInitializeParameter& InitParameter);
    
    UFUNCTION(BlueprintCallable)
    void SetupStatusCharacter(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintCallable)
    void SetupBattleTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetMutekiAllPlayer(bool bIsMuteki);
    
    UFUNCTION(BlueprintCallable)
    void SetEnablePlayerTemperatureComponent(EPalArenaPlayerIndex PlayerIndex, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableSkill(EPalArenaPlayerIndex PlayerIndex, bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableGliderPal(EPalArenaPlayerIndex PlayerIndex, bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void RestoreStatusCharacter(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintCallable)
    void ResetHateAll();
    
    UFUNCTION(BlueprintCallable)
    void RequestExitSoloMode();
    
    UFUNCTION(BlueprintCallable)
    FGuid OpenPalSelectUI(FOnPalSelectedDelegate PalSelectedDelegate);
    
protected:
    UFUNCTION()
    void OnArenaSequenceEnd(UPalArenaSequenceBase* SequenceBase);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSoloMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetStartDelaySeconds() const;
    
    UFUNCTION(BlueprintPure)
    TArray<APalPlayerCharacter*> GetSequencePlayers_ForServer() const;
    
    UFUNCTION(BlueprintPure)
    EPalArenaPlayerIndex GetPlayerIndex(const APalPlayerCharacter* Player) const;
    
    UFUNCTION(BlueprintPure)
    EPalArenaSequencerOwnerType GetOwnerType() const;
    
    UFUNCTION(BlueprintPure)
    EPalArenaPlayerIndex GetLocalPlayerIndex() const;
    
    UFUNCTION(BlueprintPure)
    TArray<APalCharacter*> GetInBattleCharacterAll() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UPalIndividualCharacterHandle*> GetInArenaPlayerHandles() const;
    
    UFUNCTION(BlueprintPure)
    UPalArenaSequenceBase* GetCurrentSequence() const;
    
    UFUNCTION(BlueprintPure)
    TArray<APalCharacter*> GetCharacterAll() const;
    
    UFUNCTION(BlueprintPure)
    TMap<EPalArenaPlayerIndex, FPalArenaPlayerInfo> GetArenaPlayerInfoMap() const;
    
    UFUNCTION(BlueprintPure)
    UPalArenaInstanceModel* GetArenaInstanceModel() const;
    
};

