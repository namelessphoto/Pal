#ifndef UE4SS_SDK_WBP_Arena_PalIcon_HPP
#define UE4SS_SDK_WBP_Arena_PalIcon_HPP

class UWBP_Arena_PalIcon_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Level;
    class UImage* Image_PalIcon;
    class UOverlay* Overlay_Ban;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_Arena_PalIcon_COnPalIconHovered OnPalIconHovered;
    void OnPalIconHovered(class UWBP_Arena_PalIcon_C* Icon);
    FWBP_Arena_PalIcon_COnPalIconUnhovered OnPalIconUnhovered;
    void OnPalIconUnhovered();

    void SetBan(bool IsBaned);
    void OnLevelUpdate(int32 NewLevel);
    void BindFromHandle(class UPalIndividualCharacterHandle* targetHandle);
    void OnInitialized();
    void BndEvt__WBP_Arena_PalIcon_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_PalIcon_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Arena_PalIcon(int32 EntryPoint);
    void OnPalIconUnhovered__DelegateSignature();
    void OnPalIconHovered__DelegateSignature(class UWBP_Arena_PalIcon_C* Icon);
};

#endif
