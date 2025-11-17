#ifndef UE4SS_SDK_WBP_IngameMenu_ChestManage_TakeOut_HPP
#define UE4SS_SDK_WBP_IngameMenu_ChestManage_TakeOut_HPP

class UWBP_IngameMenu_ChestManage_TakeOut_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* BP_PalTextBlock_ItemName;
    class UWBP_CommonButton_2_C* WBP_CommonButton_Confirm;
    class UWBP_IngameCommonSelectNum_C* WBP_IngameCommonSelectNum;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    int32 CurrentProductAmount;
    FPalItemAndNum CurrentItemInfo;
    FWBP_IngameMenu_ChestManage_TakeOut_COnTakeOutClosed OnTakeOutClosed;
    void OnTakeOutClosed();
    FWBP_IngameMenu_ChestManage_TakeOut_COnTakeOutConfirmed OnTakeOutConfirmed;
    void OnTakeOutConfirmed(FPalItemId TakeOutId, int32 TakeOutCount);
    int32 MaxCount;

    void Setup(FPalItemAndNum ItemAndNum);
    void BndEvt__WBP_IngameMenu_ChestManage_TakeOut_WBP_Menu_btn_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_ChestManage_TakeOut_WBP_CommonButton_Confirm_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_ChestManage_TakeOut_WBP_IngameCommonSelectNum_K2Node_ComponentBoundEvent_0_OnUpdateNum__DelegateSignature(int64 Num);
    void ExecuteUbergraph_WBP_IngameMenu_ChestManage_TakeOut(int32 EntryPoint);
    void OnTakeOutConfirmed__DelegateSignature(FPalItemId TakeOutId, int32 TakeOutCount);
    void OnTakeOutClosed__DelegateSignature();
};

#endif
