#ifndef UE4SS_SDK_WBP_PlayerInputKeyGuideIcon_HPP
#define UE4SS_SDK_WBP_PlayerInputKeyGuideIcon_HPP

class UWBP_PlayerInputKeyGuideIcon_C : public UPalUIActionWidgetForPlayerInput
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_32;
    class USizeBox* SizeBox_0;
    TMap<class ECommonInputType, class UTexture2D*> OverrideImage;

    void OnUISettingChanged(const FPalOptionUISettings& PrevSettings, const FPalOptionUISettings& NewSettings);
    void SetOverrideSize(FVector2D Size);
    void Construct();
    void Destruct();
    void UpdateImage(FSlateBrush newBrush);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PlayerInputKeyGuideIcon(int32 EntryPoint);
};

#endif
