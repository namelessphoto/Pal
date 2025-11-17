#ifndef UE4SS_SDK_WBP_FishingMain_HPP
#define UE4SS_SDK_WBP_FishingMain_HPP

class UWBP_FishingMain_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWBP_Fishing_AreaRank_C* WBP_Fishing_AreaRank;                              // 0x0410 (size: 0x8)
    class UWBP_Fishing_Hit_C* WBP_Fishing_Hit;                                        // 0x0418 (size: 0x8)
    class UWBP_Fishing_PowerGauge_C* WBP_Fishing_PowerGauge;                          // 0x0420 (size: 0x8)
    class UWBP_Fishing_ProgressGauge_C* WBP_Fishing_ProgressGauge;                    // 0x0428 (size: 0x8)
    class UWBP_Fishing_SelectBait_C* WBP_Fishing_SelectBait;                          // 0x0430 (size: 0x8)
    class UWBP_Ingame_Message_C* WBP_Ingame_Message;                                  // 0x0438 (size: 0x8)
    class UWBP_Reticle_KeyGuide_C* WBP_Reticle_KeyGuide_Fishing;                      // 0x0440 (size: 0x8)
    FTimerHandle FailedCheckTimerHandle;                                              // 0x0448 (size: 0x8)
    double BadAnimCheckTime;                                                          // 0x0450 (size: 0x8)
    bool IsPreSuccess;                                                                // 0x0458 (size: 0x1)
    bool IsStartFishing;                                                              // 0x0459 (size: 0x1)
    bool IsCatchBattle;                                                               // 0x045A (size: 0x1)
    bool HasBait;                                                                     // 0x045B (size: 0x1)
    FName TextIdNoFishingBait;                                                        // 0x045C (size: 0x8)
    FName TextIdBrokenRod;                                                            // 0x0464 (size: 0x8)
    bool IsPlayingFeedBack;                                                           // 0x046C (size: 0x1)
    bool IsStartMinigame;                                                             // 0x046D (size: 0x1)
    double InitProgress;                                                              // 0x0470 (size: 0x8)

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
}; // Size: 0x478

#endif
