#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalActionType.h"
#include "EPalFishingResultType.h"
#include "EPalFishingRodState.h"
#include "EPalFishingSpotDifficultyType.h"
#include "PalDamageResult.h"
#include "PalDeadInfo.h"
#include "PalFishingCatchBattleParameter.h"
#include "PalFishingCutsceneCharacterInfo.h"
#include "PalFishingCutsceneInfo.h"
#include "PalGrantCharacterRequestData.h"
#include "PalStaticItemIdAndNum.h"
#include "PalFishingComponent.generated.h"

class APalFishingSpotArea;
class UPalFishingRodModule;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalFishingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSuccessCatchBattleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartShowCutsceneDelegate, const FPalFishingCutsceneInfo&, CutsceneInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartFishingDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartCatchBattleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartAimDelegate, const TArray<FPalStaticItemIdAndNum>&, BaitItemInfoList, int32, SelectedIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickFishDelegate, FVector, FloatLocation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadedCutsceneInfoDelegate, const FPalFishingCutsceneInfo&, CutsceneInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFirstFishingDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFinishedShowCutsceneDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFailedCatchBattleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndFishingDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndAimDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeTargetSpotDelegate, EPalFishingSpotDifficultyType, DifficultyType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeBaitDelegate, int32, SelectIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCancelFishingDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FOnStartAimDelegate OnStartAimDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnEndAimDelegate OnEndAimDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnStartFishingDelegate OnStartFishingDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnEndFishingDelegate OnEndFishingDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnCancelFishingDelegate OnCancelFishingDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnStartCatchBattleDelegate OnStartCatchBattleDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSuccessCatchBattleDelegate OnSuccessCatchDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnFailedCatchBattleDelegate OnFailedCatchDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnLoadedCutsceneInfoDelegate OnLoadedCutsceneInfoDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnStartShowCutsceneDelegate OnStartShowCutsceneDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnFinishedShowCutsceneDelegate OnFinishedShowCutsceneDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPickFishDelegate OnPickFishDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeBaitDelegate OnChangeBaitDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeTargetSpotDelegate OnChangeTargetSpotDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnFirstFishingDelegate OnFirstFishingDelegate;
    
private:
    UPROPERTY(Transient)
    UPalFishingRodModule* FishingRodModule;
    
    UPROPERTY(Transient)
    FPalFishingCatchBattleParameter CatchBattleParameter;
    
    UPROPERTY(Transient)
    FPalFishingCutsceneInfo LoadedCutsceneInfo;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool IsFishingFlag;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool IsCatchBattleFlag;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool IsPressedFishingButton;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool IsAimingFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool IsSuccessUseBaitFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 SelectedBaitIndex;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalStaticItemIdAndNum> CurrentBaitItemInfoList;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool IsRequestedUseBaitFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool IsRequestedCatchBattleFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName SelectedBaitItemId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName UsedBaitItemId;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_FishingFloatLocation)
    FVector FishingFloatLocation;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_RodState)
    EPalFishingRodState FishingRodState;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalGrantCharacterRequestData GrantCharacterData;
    
public:
    UPalFishingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void SetCurrentFishingRodModule(UPalFishingRodModule* InFishingRodModule);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayActionForOtomo(EPalActionType Type);
    
private:
    UFUNCTION()
    void OnSuccessCatchBattle();
    
    UFUNCTION()
    void OnRep_RodState();
    
    UFUNCTION()
    void OnRep_FishingFloatLocation();
    
    UFUNCTION()
    void OnReleasedFishingButton();
    
    UFUNCTION()
    void OnReceivedSearchResult(const EPalFishingResultType resultType);
    
    UFUNCTION()
    void OnReceivedCreatedCharacter(const FPalGrantCharacterRequestData RequestData);
    
    UFUNCTION()
    void OnPressedFishingButton();
    
    UFUNCTION()
    void OnPickFish();
    
    UFUNCTION()
    void OnFailedCatchBattle();
    
    UFUNCTION()
    void OnDead(FPalDeadInfo DeadInfo);
    
    UFUNCTION()
    void OnDamaged(FPalDamageResult DamageResult);
    
    UFUNCTION()
    void OnChangeTargetSpot(APalFishingSpotArea* TargetSpot);
    
    UFUNCTION()
    void OnChangeRodState(EPalFishingRodState State);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyStartCatchBattle_ToALL(const FGuid& PlayerUId, const FName& PalId);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyObtainedCharacter_ToALL(const FGuid& PlayerUId, const FPalFishingCutsceneCharacterInfo& CharacterInfo);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyFinishCutscene_ToALL();
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyFailedCatchBattle_ToALL();
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyEndFishing_ToALL();
    
    UFUNCTION(BlueprintPure)
    bool IsFishingButtonPressed() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsFishing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFirstFishing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCatchBattle() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAiming() const;
    
private:
    UFUNCTION(BlueprintPure)
    int32 GetPlayerInputFishingDirection() const;
    
    UFUNCTION(BlueprintPure)
    UPalFishingRodModule* GetFishingRodModule() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishShowCutscene();
    
};

