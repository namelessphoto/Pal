#ifndef UE4SS_SDK_WBP_Paldex_ForDisplay_HPP
#define UE4SS_SDK_WBP_Paldex_ForDisplay_HPP

class UWBP_Paldex_ForDisplay_C : public UPalUIPaldex
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_Paldex_C* WBP_Paldex;
    FPalDataTableRowName_UIInputAction ToModelInputAction;
    FPalDataTableRowName_UIInputAction ToDistributionInputAction;
    FPalUIActionBindData ToModelInputHandle;
    FPalUIActionBindData ToDistributionInputHandle;
    bool isDisplayDistribution;
    FName NowDisplayCharacterID;
    double mapControllWeight_Gamepad;
    double mapControllWeight_Mouse;
    FRotator captureCameraRotator;
    double modelRotationControllWeight_Gamepad;
    FPalDataTableRowName_UIInputAction ChangeDistributionTimeAction;
    FPalUIActionBindData ChangeDistributionTimeActionHandle;
    TEnumAsByte<E_PaldexDistributionTimeType> nowDisplayDistributionTimeType;
    double distributionZoomWeight_Mouse;
    FPalDataTableRowName_UIInputAction ChangeDistributionZoomAction;
    FPalUIActionBindData ChangeDistributionZoomActionHandle;
    FWBP_Paldex_ForDisplay_COnAllNewFlagCleared OnAllNewFlagCleared;
    void OnAllNewFlagCleared();
    FPalDataTableRowName_UIInputAction RandomCryAction;
    FPalUIActionBindData RandomCryActionHandle;
    FName TmpDelayScrollTargetCharacetr;

    void SetEnableRandomCryAction(bool IsEnableFlag);
    void PlayRandomCry();
    void UpdateNewFlag(FName CharacterID);
    void OnChangeDistributionInput();
    void OnChangeModelInput();
    void Change Map Zoom Rate();
    void SwitchDistributionTime(TEnumAsByte<E_PaldexDistributionTimeType> timeType);
    void ChangeDistributionTime();
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void ToDistributionDisplayMode();
    void ToModelDisplayMode();
    class UWidget* BP_GetDesiredFocusTarget();
    void Setup();
    void Construct();
    void BndEvt__WBP_Paldex_ForDisplay_WBP_Paldex_K2Node_ComponentBoundEvent_1_OnClickedModelTab__DelegateSignature();
    void BndEvt__WBP_Paldex_ForDisplay_WBP_Paldex_K2Node_ComponentBoundEvent_2_OnClickedDistributionTab__DelegateSignature();
    void BndEvt__WBP_Paldex_ForDisplay_WBP_Paldex_K2Node_ComponentBoundEvent_3_OnClickedAnyPalPanel__DelegateSignature(FName CharacterID);
    void DelayScrollToCharacterID(FName CharacterID);
    void ExecuteUbergraph_WBP_Paldex_ForDisplay(int32 EntryPoint);
    void OnAllNewFlagCleared__DelegateSignature();
};

#endif
