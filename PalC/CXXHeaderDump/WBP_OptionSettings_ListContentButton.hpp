#ifndef UE4SS_SDK_WBP_OptionSettings_ListContentButton_HPP
#define UE4SS_SDK_WBP_OptionSettings_ListContentButton_HPP

class UWBP_OptionSettings_ListContentButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* CanvasPanel_Warning;
    class UImage* Image_Key;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;

    void OnUISettingChanged(const FPalOptionUISettings& PrevSettings, const FPalOptionUISettings& NewSettings);
    void GetCurrentIcon(FSlateBrush& Brush);
    void SetIcon(FSlateBrush KeyIcon);
    void EnableWarning(bool IsEnable);
    void SetUIIcon(const FSlateBrush& InBrush, FName ActionName, ECommonInputType InputType);
    void OnInitialized();
    void ExecuteUbergraph_WBP_OptionSettings_ListContentButton(int32 EntryPoint);
};

#endif
