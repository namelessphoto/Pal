#ifndef UE4SS_SDK_WBP_OtomoLoupe_HPP
#define UE4SS_SDK_WBP_OtomoLoupe_HPP

class UWBP_OtomoLoupe_C : public UWBP_LoupeBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_PalLoupe_C* WBP_PalLoupe;
    class UPalIndividualCharacterHandle* targetHandle;

    void GetLoupeWidgetSize(FVector2D& widgetSize);
    void GetTranslationTarget(class UWidget*& Widget);
    void RoundScreenPosition(FVector2D ScreenPosition, FVector2D& calcedPosition);
    void UpdateArrowImageAngle(double newAngle);
    void SetFinalWidgetOpacity(double calcedOpacity);
    void CalcScreenPosition();
    bool IsEnableLoupe();
    void GetTargetWidgetSize(FVector2D& outVector);
    void GetTargetWorldLocation(FVector& outVector);
    void Setup();
    void OnInactiveOtomo();
    void OnActivateOtomo();
    void OnInitialized();
    void ExecuteUbergraph_WBP_OtomoLoupe(int32 EntryPoint);
};

#endif
