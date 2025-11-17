#ifndef UE4SS_SDK_WBP_PalCommonCharacterSlot_HPP
#define UE4SS_SDK_WBP_PalCommonCharacterSlot_HPP

class UWBP_PalCommonCharacterSlot_C : public UWBP_PalCharacterSlotBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_BaseDefault;
    class UWidgetAnimation* Anm_BaseDisable;
    class UWidgetAnimation* Anm_SeedIcon;
    class UWidgetAnimation* Anm_LowHealthLoop;
    class UWidgetAnimation* Anm_SleepIcon;
    class UWidgetAnimation* Anm_MealIcon;
    class UWidgetAnimation* Anm_WorkIcon;
    class UImage* Background;
    class UImage* Background_circle_b;
    class UImage* Background_Doping;
    class UImage* Image_64;
    class UImage* Image_229;
    class UImage* Image_Icon_Expedition;
    class UImage* Image_Icon_GlobalInport;
    class UImage* Image_Icon_Locked;
    class UImage* Image_IconPalWork;
    class UImage* Image_Meal;
    class UImage* Image_PalBattleImage;
    class UImage* Image_PalDying;
    class UImage* Image_PalLowHealth;
    class UImage* Image_PalSleep;
    class UImage* Image_Rare;
    class UImage* Image_Strong;
    class UOverlay* Overlay_Doping;
    class UOverlay* Overlay_Revive;
    class UBP_PalTextBlock_C* Text_HPPercent;
    class UBP_PalTextBlock_C* Text_ReviveTimer;
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;
    bool lastWorkDetail;
    bool isBattleModeDisplay;
    bool isLowHealthBlink;
    bool isDisplayHealthPercent;
    bool isDisplayRarity;
    double chachedLastHPPercent;
    bool bIsDIsplayDopingEffect;

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
};

#endif
