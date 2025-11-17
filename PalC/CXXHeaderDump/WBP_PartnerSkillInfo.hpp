#ifndef UE4SS_SDK_WBP_PartnerSkillInfo_HPP
#define UE4SS_SDK_WBP_PartnerSkillInfo_HPP

class UWBP_PartnerSkillInfo_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_HideShow;
    class UWBP_Ingame_PalSkillGauge_C* WBP_Ingame_PalSkillGauge;
    class UPalPartnerSkillParameterComponent* CurrentPartnerSkillParameter;
    bool isShowCoolDown;
    FTimerHandle CheckPartnerSkillUnlockedTimer;
    bool IsHiding;
    bool IsOverride;
    FDataTableRowHandle RideMsgID;
    FDataTableRowHandle GetoffMsgID;
    bool NowRiding;
    bool NowCooping;
    bool CurrentExcuting;
    FTimerHandle AnmEndTimer;
    float CacheRatio;
    FDataTableRowHandle CancelMSGID;

    void ToggleCoopText(bool ShowOriginal);
    void OnStopCoop();
    void OnStartCoop();
    void EndExecuteAnmTimer();
    void ShowSkillExecuteAnm(bool IsExcuting);
    void Change Ride Key Guide(bool Ride);
    void Setup();
    void Should Show UI(bool& ShouldShow);
    void Check Partner Skill Unlocked Timer();
    void CanRideCharacter(bool& CanRide);
    void ShowCoolDownTime();
    void Show Effect Time();
    void Hide();
    void SetupDisplay();
    void Update Cool Down Time(FFixedPoint Now, FFixedPoint Max);
    void Update Effect Time(FFixedPoint Now, FFixedPoint Max);
    void Get Partner Skill Name Text(FText& SkillNameText);
    void GetPartnerSkillParameter(class UPalPartnerSkillParameterComponent*& PartnerSkillParameter);
    void GetOtomoPalHolder(class UBP_OtomoPalHolderComponent_C*& OtomoPalHolder);
    void OnActivateOtomo();
    void OnInactiveOtomo();
    void TriggerInput();
    void ReleaseInput();
    void Destruct();
    void AnmEvent_HideShow(bool Hide, bool Override);
    void ExecuteUbergraph_WBP_PartnerSkillInfo(int32 EntryPoint);
};

#endif
