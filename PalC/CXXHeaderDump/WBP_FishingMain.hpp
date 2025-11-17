#ifndef UE4SS_SDK_WBP_FishingMain_HPP
#define UE4SS_SDK_WBP_FishingMain_HPP

class UWBP_FishingMain_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_Fishing_AreaRank_C* WBP_Fishing_AreaRank;
    class UWBP_Fishing_Hit_C* WBP_Fishing_Hit;
    class UWBP_Fishing_PowerGauge_C* WBP_Fishing_PowerGauge;
    class UWBP_Fishing_ProgressGauge_C* WBP_Fishing_ProgressGauge;
    class UWBP_Fishing_SelectBait_C* WBP_Fishing_SelectBait;
    class UWBP_Ingame_Message_C* WBP_Ingame_Message;
    class UWBP_Reticle_KeyGuide_C* WBP_Reticle_KeyGuide_Fishing;
    FTimerHandle FailedCheckTimerHandle;
    double BadAnimCheckTime;
    bool IsPreSuccess;
    bool IsStartFishing;
    bool IsCatchBattle;
    bool HasBait;
    FName TextIdNoFishingBait;
    FName TextIdBrokenRod;
    bool IsPlayingFeedBack;
    bool IsStartMinigame;
    double InitProgress;

    void StopFeedback(bool ForceStop);
    void PlayFeedBack();
    void CheckRodBroken(bool& IsBroken);
    void UnEquipFishingRod();
    void EquipFishingRod();
    void GetHitIconLocation(FVector& Location);
    void OnContinueFailed();
    void OnFailedFight();
    void OnSuccessFight();
    void UpdateProgress();
    void SetBarSize(double BarSize);
    void UpdatePosition(double FishPosX, double PlayerInput);
    void SetFishingProgress_Rate(double Rate);
    void OnInitialized();
    void EndRequest(bool IsSuccess);
    void EndFishing(bool IsSuccess);
    void OnStartFishing();
    void OnEndAim();
    void SetupAfterCreatePlayer();
    void OnEndFishing();
    void OnSuccessFishing();
    void OnStartCatchBattle();
    void OnFailedFishing();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnChangeBait(int32 SelectIndex);
    void OnChangeWeapon(class APalWeaponBase* Weapon);
    void OnPickFish(FVector FloatLocation);
    void OnStartAim(const TArray<FPalStaticItemIdAndNum>& BaitItemInfoList, int32 SelectedIndex);
    void OnChangeTargetSpot(EPalFishingSpotDifficultyType DifficultyType);
    void OnFirstFishing();
    void ExecuteUbergraph_WBP_FishingMain(int32 EntryPoint);
};

#endif
