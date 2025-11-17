#ifndef UE4SS_SDK_WBP_Common_LoadingIcon_HPP
#define UE4SS_SDK_WBP_Common_LoadingIcon_HPP

class UWBP_Common_LoadingIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Loop;
    class UImage* Image_Icon_0;
    class UImage* Image_Icon_1;
    class UImage* Image_Icon_10;
    class UOverlay* Overlay_166;

    void Construct();
    void ExecuteUbergraph_WBP_Common_LoadingIcon(int32 EntryPoint);
};

#endif
