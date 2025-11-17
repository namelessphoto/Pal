#ifndef UE4SS_SDK_WBP_WorldMap_Icon_Respawn_HPP
#define UE4SS_SDK_WBP_WorldMap_Icon_Respawn_HPP

class UWBP_WorldMap_Icon_Respawn_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Loop;
    class UImage* Icon;
    class UImage* Image_Wave;
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;
    FName Respawn Point ID;

    void GetInvisibleButton(class UWidget*& Button);
    void Setup_Internal(class UPalLocationPoint* LocationPoint);
    void BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_WorldMap_Icon_Respawn_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void ExecuteUbergraph_WBP_WorldMap_Icon_Respawn(int32 EntryPoint);
};

#endif
