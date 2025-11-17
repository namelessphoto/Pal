#ifndef UE4SS_SDK_WBP_DyingFriendLoupe_HPP
#define UE4SS_SDK_WBP_DyingFriendLoupe_HPP

class UWBP_DyingFriendLoupe_C : public UWBP_LoupeBase_C
{
    class UWBP_GuildMemberGauge_C* WBP_GuildMemberGauge;
    class UPalIndividualCharacterHandle* targetHandle;
    class UBP_Status_Dying_C* Dying Status;
    FPalInstanceID SyncId;

    void OnSyncIndividualParameter(FPalInstanceID InstanceId);
    void Setup(class UBP_Status_Dying_C* DyingStatus);
    void SetFinalWidgetOpacity(double calcedOpacity);
    bool IsEnableLoupe();
    void GetTargetWidgetSize(FVector2D& outVector);
    void GetLoupeWidgetSize(FVector2D& widgetSize);
    void GetTranslationTarget(class UWidget*& Widget);
    void UpdateArrowImageAngle(double newAngle);
    void CalcScreenPosition();
    void GetTargetWorldLocation(FVector& outVector);
};

#endif
