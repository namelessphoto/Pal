#ifndef UE4SS_SDK_WBP_PalCommonCharacterSlot_HPP
#define UE4SS_SDK_WBP_PalCommonCharacterSlot_HPP

class UWBP_PalCommonCharacterSlot_C : public UWBP_PalCharacterSlotBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08A0 (size: 0x8)
    class UWidgetAnimation* Anm_BaseDefault;                                          // 0x08A8 (size: 0x8)
    class UWidgetAnimation* Anm_BaseDisable;                                          // 0x08B0 (size: 0x8)
    class UWidgetAnimation* Anm_SeedIcon;                                             // 0x08B8 (size: 0x8)
    class UWidgetAnimation* Anm_LowHealthLoop;                                        // 0x08C0 (size: 0x8)
    class UWidgetAnimation* Anm_SleepIcon;                                            // 0x08C8 (size: 0x8)
    class UWidgetAnimation* Anm_MealIcon;                                             // 0x08D0 (size: 0x8)
    class UWidgetAnimation* Anm_WorkIcon;                                             // 0x08D8 (size: 0x8)
    class UImage* Background;                                                         // 0x08E0 (size: 0x8)
    class UImage* Background_circle_b;                                                // 0x08E8 (size: 0x8)
    class UImage* Background_Doping;                                                  // 0x08F0 (size: 0x8)
    class UImage* Image_64;                                                           // 0x08F8 (size: 0x8)
    class UImage* Image_229;                                                          // 0x0900 (size: 0x8)
    class UImage* Image_Icon_Expedition;                                              // 0x0908 (size: 0x8)
    class UImage* Image_Icon_GlobalInport;                                            // 0x0910 (size: 0x8)
    class UImage* Image_Icon_Locked;                                                  // 0x0918 (size: 0x8)
    class UImage* Image_IconPalWork;                                                  // 0x0920 (size: 0x8)
    class UImage* Image_Meal;                                                         // 0x0928 (size: 0x8)
    class UImage* Image_PalBattleImage;                                               // 0x0930 (size: 0x8)
    class UImage* Image_PalDying;                                                     // 0x0938 (size: 0x8)
    class UImage* Image_PalLowHealth;                                                 // 0x0940 (size: 0x8)
    class UImage* Image_PalSleep;                                                     // 0x0948 (size: 0x8)
    class UImage* Image_Rare;                                                         // 0x0950 (size: 0x8)
    class UImage* Image_Strong;                                                       // 0x0958 (size: 0x8)
    class UOverlay* Overlay_Doping;                                                   // 0x0960 (size: 0x8)
    class UOverlay* Overlay_Revive;                                                   // 0x0968 (size: 0x8)
    class UBP_PalTextBlock_C* Text_HPPercent;                                         // 0x0970 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ReviveTimer;                                       // 0x0978 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x0980 (size: 0x8)
    bool lastWorkDetail;                                                              // 0x0988 (size: 0x1)
    bool isBattleModeDisplay;                                                         // 0x0989 (size: 0x1)
    bool isLowHealthBlink;                                                            // 0x098A (size: 0x1)
    bool isDisplayHealthPercent;                                                      // 0x098B (size: 0x1)
    bool isDisplayRarity;                                                             // 0x098C (size: 0x1)
    double chachedLastHPPercent;                                                      // 0x0990 (size: 0x8)
    bool bIsDIsplayDopingEffect;                                                      // 0x0998 (size: 0x1)

    void UpdateStatusDetail();
    void OnRemoveStatus_Binded(class UPalStatusComponent* StatusComponent, EPalStatusID statusID);
    void OnAddStatus_Binded(class UPalStatusComponent* StatusComponent, EPalStatusID statusID, class UPalStatusBase* StatusBase);
    void SetForceExpeditionMark(bool bInExpedition);
    void OnChangedAssignToExpedition_Binded(bool bIsAssigned);
    void OnUpdateFavorite_Binded(int32 NewIndex);
    void OnUpdateReviveTimer_Binded(double NowTimer);
    void On Set Rarity Binded(bool IsBoss, bool IsRare);
    void OnTargetCharacterEndEat();
    void OnTargetCharacterBeginEat();
    void OnTargetCharcaterEndSleep();
    void OnTargetCharcaterBeginSleep();
    void OnNotifyBattleModeChanged_Binded(bool IsBattleMode);
    void OnNotifyWorkDetail_Binded(bool IsWorking);
    void OnUpdateHP_Binded(int64 nowHP, int64 nowMaxHP);
    void RegisterCharacterIconWidget(class UWBP_PalCharacterIconBase_C*& iconWidget);
    void On Update Slot Binded(class UPalIndividualCharacterSlot* TargetSlot);
    void OnSetValidSlot_Binded();
    void OnSetEmpty_Binded();
    void AnmEvent_StartLowHealthLoop();
    void AnmEvent_StopLowHeathLoop();
    void AnmEvent_BeginSleep();
    void AnmEvent_EndSleep();
    void AnmEvent_StartWork();
    void AnmEvent_EndWork();
    void AnmEvent_BeginEat();
    void AnmEvent_EndEat();
    void AnmEvent_Enabled();
    void AnmEvent_Disabled();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCommonCharacterSlot(int32 EntryPoint);
}; // Size: 0x999

#endif
