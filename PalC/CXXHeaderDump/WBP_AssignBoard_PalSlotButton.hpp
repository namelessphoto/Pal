#ifndef UE4SS_SDK_WBP_AssignBoard_PalSlotButton_HPP
#define UE4SS_SDK_WBP_AssignBoard_PalSlotButton_HPP

class UWBP_AssignBoard_PalSlotButton_C : public UWBP_PalCharacterSlotButtonBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_AssignBoard_PalSlot_C* WBP_AssignBoard_PalSlot;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;

    void SetReferenceWorkSuitability(TArray<EPalWorkSuitability>& Suitabilities);
    void SetReferenceWorkId(FGuid WorkId);
    void SetSelectedCheck(bool IsCheck);
    void SetDisplayGender(bool isDisplay);
    void Set Is Fixed Assign(bool IsAssign);
    void RegisterCharacterSlotWidget(class UWBP_PalCharacterSlotBase_C*& characterSlotWidget);
    void RegisterButton(class UCommonButtonBase*& Button);
    void OnInitialized();
    void BndEvt__WBP_AssignBoard_PalSlotButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_AssignBoard_PalSlotButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_AssignBoard_PalSlotButton(int32 EntryPoint);
};

#endif
