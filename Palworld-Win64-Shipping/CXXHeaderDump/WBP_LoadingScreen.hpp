#ifndef UE4SS_SDK_WBP_LoadingScreen_HPP
#define UE4SS_SDK_WBP_LoadingScreen_HPP

class UWBP_LoadingScreen_C : public UPalLoadingScreenWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Default_In;
    class UCanvasPanel* CanvasPanel_0;
    class UImage* Image_0;
    class UImage* Image_50;
    class UWBP_Common_LoadingIcon_C* WBP_Common_LoadingIcon;

    void SetBgColor(FLinearColor Color);
    void Construct();
    void ToggleVisibility(bool Visiable);
    void ExecuteUbergraph_WBP_LoadingScreen(int32 EntryPoint);
};

#endif
