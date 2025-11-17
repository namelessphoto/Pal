#ifndef UE4SS_SDK_WBP_Map_IconSupply_HPP
#define UE4SS_SDK_WBP_Map_IconSupply_HPP

class UWBP_Map_IconSupply_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon;
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;

    void GetInvisibleButton(class UWidget*& Button);
    void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void SetTexture(class UTexture2D* Texture);
    void ExecuteUbergraph_WBP_Map_IconSupply(int32 EntryPoint);
};

#endif
