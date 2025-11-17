#ifndef UE4SS_SDK_WBP_Map_IconCamp_HPP
#define UE4SS_SDK_WBP_Map_IconCamp_HPP

class UWBP_Map_IconCamp_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon;
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;
    FGuid BaseCampId;
    bool IsEnabled;

    void GetInvisibleButton(class UWidget*& Button);
    void SetEnable(bool Enable);
    void BndEvt__WBP_Map_IconCamp_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconCamp_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconCamp_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Map_IconCamp(int32 EntryPoint);
};

#endif
