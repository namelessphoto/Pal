#ifndef UE4SS_SDK_WBP_PalKeyGuideIconAndText_HPP
#define UE4SS_SDK_WBP_PalKeyGuideIconAndText_HPP

class UWBP_PalKeyGuideIconAndText_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_75;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;
    FPalDataTableRowName_UIInputAction BindingActionName;

    void OnInitialized();
    void ExecuteUbergraph_WBP_PalKeyGuideIconAndText(int32 EntryPoint);
};

#endif
