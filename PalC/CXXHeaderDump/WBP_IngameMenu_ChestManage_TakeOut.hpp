#ifndef UE4SS_SDK_WBP_IngameMenu_ChestManage_TakeOut_HPP
#define UE4SS_SDK_WBP_IngameMenu_ChestManage_TakeOut_HPP

class UWBP_IngameMenu_ChestManage_TakeOut_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_ItemName;                               // 0x0410 (size: 0x8)
    class UWBP_CommonButton_2_C* WBP_CommonButton_Confirm;                            // 0x0418 (size: 0x8)
    class UWBP_IngameCommonSelectNum_C* WBP_IngameCommonSelectNum;                    // 0x0420 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0428 (size: 0x8)
    int32 CurrentProductAmount;                                                       // 0x0430 (size: 0x4)
    FPalItemAndNum CurrentItemInfo;                                                   // 0x0434 (size: 0x2C)
    FWBP_IngameMenu_ChestManage_TakeOut_COnTakeOutClosed OnTakeOutClosed;             // 0x0460 (size: 0x10)
    void OnTakeOutClosed();
    FWBP_IngameMenu_ChestManage_TakeOut_COnTakeOutConfirmed OnTakeOutConfirmed;       // 0x0470 (size: 0x10)
    void OnTakeOutConfirmed(FPalItemId TakeOutId, int32 TakeOutCount);
    int32 MaxCount;                                                                   // 0x0480 (size: 0x4)

    void Setup(FPalItemAndNum ItemAndNum);
    void BndEvt__WBP_IngameMenu_ChestManage_TakeOut_WBP_Menu_btn_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_ChestManage_TakeOut_WBP_CommonButton_Confirm_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_ChestManage_TakeOut_WBP_IngameCommonSelectNum_K2Node_ComponentBoundEvent_0_OnUpdateNum__DelegateSignature(int64 Num);
    void ExecuteUbergraph_WBP_IngameMenu_ChestManage_TakeOut(int32 EntryPoint);
    void OnTakeOutConfirmed__DelegateSignature(FPalItemId TakeOutId, int32 TakeOutCount);
    void OnTakeOutClosed__DelegateSignature();
}; // Size: 0x484

#endif
