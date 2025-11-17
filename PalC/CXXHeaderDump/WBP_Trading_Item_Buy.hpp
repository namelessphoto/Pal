#ifndef UE4SS_SDK_WBP_Trading_Item_Buy_HPP
#define UE4SS_SDK_WBP_Trading_Item_Buy_HPP

class UWBP_Trading_Item_Buy_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Buy;                                              // 0x0438 (size: 0x8)
    class UHorizontalBox* HorizontalBoxSellListHead_;                                 // 0x0440 (size: 0x8)
    class UCanvasPanel* ItemThumbnail;                                                // 0x0448 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemName;                                          // 0x0450 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RemainingStock;                                    // 0x0458 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x0460 (size: 0x8)
    class UWBP_IngameCommonSelectNum_C* WBP_IngameCommonSelectNum;                    // 0x0468 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_Item_C* WBP_IngameMenu_WorkSpace_Item;            // 0x0470 (size: 0x8)
    class UWBP_ItemInfo_ForItemBooth_C* WBP_ItemInfo_ForItemBooth;                    // 0x0478 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0480 (size: 0x8)
    class UWBP_NoData_C* WBP_NoData;                                                  // 0x0488 (size: 0x8)
    class UWBP_PalInGameMenuItemIcon_C* WBP_PalInGameMenuItemIcon;                    // 0x0490 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List;                            // 0x0498 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_1;                          // 0x04A0 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_2;                          // 0x04A8 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_3;                          // 0x04B0 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_4;                          // 0x04B8 (size: 0x8)
    TArray<class UWBP_Trading_Item_List_C*> TradeList;                                // 0x04C0 (size: 0x10)
    class UPalMapObjectItemBoothModel*  ItemBoothModel;                               // 0x04D0 (size: 0x8)
    int32 CurrentSelectIndex;                                                         // 0x04D8 (size: 0x4)
    TArray<FPalUIActionBindData> TakeOutBindedActions;                                // 0x04E0 (size: 0x10)
    int32 CurrentGroupAmount;                                                         // 0x04F0 (size: 0x4)
    bool Tradeable;                                                                   // 0x04F4 (size: 0x1)

    void OnTradeUnhovered(int32 TradeIndex);
    void OnTradeHovered(int32 TradeIndex);
    void OnTradeComplete(class APalPlayerState* PlayerState);
    void Update Select Count();
    void CalcMaxTradeGroup(int32& Count);
    void SetMax();
    void OnCancelAction();
    void CheckTradeable();
    void Switch Trading Panel(bool Visible);
    void On Store Content Updated(class UPalItemContainer* ItemContainer);
    void Update Sell List();
    class UWidget* BP_GetDesiredFocusTarget();
    void Setup();
    void OnTradeSelected(int32 Index);
    void OnSetup();
    void OnInitialized();
    void BndEvt__WBP_Trading_Item_Buy_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_Trading_Item_Buy_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_Trading_Item_Buy_WBP_IngameCommonSelectNum_K2Node_ComponentBoundEvent_5_OnUpdateNum__DelegateSignature(int64 Num);
    void ExecuteUbergraph_WBP_Trading_Item_Buy(int32 EntryPoint);
}; // Size: 0x4F5

#endif
