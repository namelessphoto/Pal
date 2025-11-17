#ifndef UE4SS_SDK_WBP_IngameMenu_Chest_LockNum_HPP
#define UE4SS_SDK_WBP_IngameMenu_Chest_LockNum_HPP

class UWBP_IngameMenu_Chest_LockNum_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_push;
    class UImage* FocusFrame;
    class UBP_PalTextBlock_C* Text_Num;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_IngameMenu_Chest_LockNum_COnNumClicked OnNumClicked;
    void OnNumClicked(int32 ClickedNum);
    int32 Num;

    void BndEvt__WBP_IngameMenu_Chest_LockNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void SetNum(int32 Num);
    void BndEvt__WBP_IngameMenu_Chest_LockNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Chest_LockNum_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Destruct();
    void ExecuteUbergraph_WBP_IngameMenu_Chest_LockNum(int32 EntryPoint);
    void OnNumClicked__DelegateSignature(int32 ClickedNum);
};

#endif
