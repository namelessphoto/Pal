#ifndef UE4SS_SDK_WBP_Trading_Item_Buy_HPP
#define UE4SS_SDK_WBP_Trading_Item_Buy_HPP

class UWBP_Trading_Item_Buy_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* CanvasPanel_Buy;
    class UHorizontalBox* HorizontalBoxSellListHead_;
    class UCanvasPanel* ItemThumbnail;
    class UBP_PalTextBlock_C* Text_ItemName;
    class UBP_PalTextBlock_C* Text_RemainingStock;
    class UWBP_CommonButton_C* WBP_CommonButton;
    class UWBP_IngameCommonSelectNum_C* WBP_IngameCommonSelectNum;
    class UWBP_IngameMenu_WorkSpace_Item_C* WBP_IngameMenu_WorkSpace_Item;
    class UWBP_ItemInfo_ForItemBooth_C* WBP_ItemInfo_ForItemBooth;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UWBP_NoData_C* WBP_NoData;
    class UWBP_PalInGameMenuItemIcon_C* WBP_PalInGameMenuItemIcon;
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List;
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_1;
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_2;
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_3;
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_4;
    TArray<class UWBP_Trading_Item_List_C*> TradeList;
    class UPalMapObjectItemBoothModel*  ItemBoothModel;
    int32 CurrentSelectIndex;
    TArray<FPalUIActionBindData> TakeOutBindedActions;
    int32 CurrentGroupAmount;
    bool Tradeable;

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
};

#endif
