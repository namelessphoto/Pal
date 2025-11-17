#ifndef UE4SS_SDK_WBP_BossWarningLoupe_HPP
#define UE4SS_SDK_WBP_BossWarningLoupe_HPP

class UWBP_BossWarningLoupe_C : public UWBP_LoupeBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    class UWidgetAnimation* Anm_Caution;                                              // 0x0490 (size: 0x8)
    class UCanvasPanel* Canvas_Caution;                                               // 0x0498 (size: 0x8)
    class UImage* Loupe_Angle;                                                        // 0x04A0 (size: 0x8)
    class UPalIndividualCharacterHandle* targetHandle;                                // 0x04A8 (size: 0x8)
    FPalInstanceID SyncId;                                                            // 0x04B0 (size: 0x30)
    bool AlwaysDisplay;                                                               // 0x04E0 (size: 0x1)

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
}; // Size: 0x4E1

#endif
