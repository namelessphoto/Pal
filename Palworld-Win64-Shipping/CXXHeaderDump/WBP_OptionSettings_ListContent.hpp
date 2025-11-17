#ifndef UE4SS_SDK_WBP_OptionSettings_ListContent_HPP
#define UE4SS_SDK_WBP_OptionSettings_ListContent_HPP

class UWBP_OptionSettings_ListContent_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UImage* Base;
    class UImage* Base_Focus;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;
    class UWBP_PalInvisibleButton_C* Button;
    class UCanvasPanel* CanvasPanel_0;
    class UWBP_OptionSettings_ClickableButton_C* WBP_OptionSettings_ClickableButton;
    class UWBP_OptionSettings_ListContentButton_C* WBP_OptionSettings_ListContentButton;
    class UWBP_OptionSettings_ListContentLR_C* WBP_OptionSettings_ListContentLR;
    class UWBP_OptionSettings_ListContentSlider_C* WBP_OptionSettings_ListContentSlider;
    class UWBP_OptionSettings_ListContentSwitch_C* WBP_OptionSettings_ListContentSwitch;
    FDataTableRowHandle SettingNameMsgId;
    TArray<FString> ScreenSelections;
    int32 Current;
    FPalUIActionBindData BackAction;
    FPalUIActionBindData LeftPressed;
    FPalUIActionBindData LeftReleased;
    FPalUIActionBindData RightPressed;
    FPalUIActionBindData RightReleased;
    FName BackActionName;
    FName LeftActionName;
    FName RightActionName;
    bool Editing;
    FTimerHandle SubtractTimer;
    FTimerHandle AddTimer;
    FLinearColor OriginalColor;
    double ChangePercent;
    bool BlockMouseClick;
    FWBP_OptionSettings_ListContent_COnKeyConfigClicked OnKeyConfigClicked;
    void OnKeyConfigClicked(FName KeyName, ECommonInputType InputType, EPalKeyConfigAxisFilterType AxisType);
    FName ActionKeyName;
    ECommonInputType Input Type;
    EPalKeyConfigAxisFilterType Filter Type;

    void InputMethodChanged(ECommonInputType InputType);
    void Construct();
    void SetSelecter(const TArray<FDataTableRowHandle>& Selections, const int32 Current);
    void SetResolution(FIntPoint CurrentResolution, const TArray<FIntPoint>& Resolutions);
    void SetSwitcher(const bool CurrentOn);
    void SetSelecter_String(const TArray<FString>& Selections, const int32 Current);
    void SetSlider(double CurrentValue, double Min, double Max, double FixedChangeValue, bool UseFixedValue);
    void BackToList();
    void Gamepad_LeftPress();
    void Gamepad_RightPress();
    void Gamepad_LeftRelease();
    void SubtractValue();
    void addValue();
    void Gamepad_RightRelease();
    void SetClickableButton();
    void SetConfigButton(FName ActionName, ECommonInputType InputType, EPalKeyConfigAxisFilterType FilterType);
    void SetKeyIcon(FKey Key, ECommonInputType InputType);
    void SetKeyWarning(bool EnableWarning);
    void SetInteractable(bool CanInteract);
    void BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void SetUIConfigButton(FName UIActionName, ECommonInputType InputType, const FKey Key);
    void SetMsgId(FDataTableRowHandle rowHandle);
    void Destruct();
    void カスタムイベント();
    void ExecuteUbergraph_WBP_OptionSettings_ListContent(int32 EntryPoint);
    void OnKeyConfigClicked__DelegateSignature(FName KeyName, ECommonInputType InputType, EPalKeyConfigAxisFilterType AxisType);
};

#endif
