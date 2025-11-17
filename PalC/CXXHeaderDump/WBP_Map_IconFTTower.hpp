#ifndef UE4SS_SDK_WBP_Map_IconFTTower_HPP
#define UE4SS_SDK_WBP_Map_IconFTTower_HPP

class UWBP_Map_IconFTTower_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon;
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;
    bool IsEnabled;
    FName Fast Travel Point ID;

    void GetInvisibleButton(class UWidget*& Button);
    void Setup_Internal(class UPalLocationPoint* LocationPoint);
    void ClickEvent();
    void SetEnable(bool Enable);
    void BndEvt__WBP_Map_IconFTTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconFTTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconFTTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Map_IconFTTower(int32 EntryPoint);
};

#endif
