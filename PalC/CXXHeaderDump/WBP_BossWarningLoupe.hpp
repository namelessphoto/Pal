#ifndef UE4SS_SDK_WBP_BossWarningLoupe_HPP
#define UE4SS_SDK_WBP_BossWarningLoupe_HPP

class UWBP_BossWarningLoupe_C : public UWBP_LoupeBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Caution;
    class UCanvasPanel* Canvas_Caution;
    class UImage* Loupe_Angle;
    class UPalIndividualCharacterHandle* targetHandle;
    FPalInstanceID SyncId;
    bool AlwaysDisplay;

    void CallWarning(bool AlwaysDisplay);
    void UpdatePositionAndVisibility(double Dot, FVector rootLocation, FVector TargetLocation);
    void Setup(class UPalIndividualCharacterHandle* targetHandle);
    void CalcScreenPosition();
    bool IsEnableLoupe();
    void GetTargetWidgetSize(FVector2D& outVector);
    void GetTargetWorldLocation(FVector& outVector);
    void SetFinalWidgetOpacity(double calcedOpacity);
    void GetLoupeWidgetSize(FVector2D& widgetSize);
    void UpdateArrowImageAngle(double newAngle);
    void AnmEvent_Warning();
    void ExecuteUbergraph_WBP_BossWarningLoupe(int32 EntryPoint);
};

#endif
