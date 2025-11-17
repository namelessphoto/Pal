#ifndef UE4SS_SDK_WBP_Trading_Item_List_HPP
#define UE4SS_SDK_WBP_Trading_Item_List_HPP

class UWBP_Trading_Item_List_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToSoldout;
    class UCanvasPanel* Canvas_Empty;
    class UCanvasPanel* Canvas_Select;
    class UCanvasPanel* CanvasPanel_TradeInfo;
    class UImage* Frame_Focus_Flare;
    class UBP_PalTextBlock_C* Text_Stock;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton;
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_Cost;
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_Product;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_Trading_Item_List_COnEmptySlotClicked OnEmptySlotClicked;
    void OnEmptySlotClicked();
    int32 Index;
    FWBP_Trading_Item_List_COnClickedRemoveButton OnClickedRemoveButton;
    void OnClickedRemoveButton(int32 TradeIndex);
    bool IsEmpty;
    FWBP_Trading_Item_List_COnTradeSelect OnTradeSelect;
    void OnTradeSelect(int32 Index);
    FWBP_Trading_Item_List_COnTradeInfoHovered OnTradeInfoHovered;
    void OnTradeInfoHovered(int32 Index);
    FWBP_Trading_Item_List_COnTradeInfoUnhovered OnTradeInfoUnhovered;
    void OnTradeInfoUnhovered(int32 Index);
    bool NowSoldOut;

    void UpdateStock(int32 StockCount);
    void SetEmpty();
    void Setup Pal Trade Info(FPalPalBoothTradeInfo TradeInfo, bool RemoveButtonVisible, FName CharacterID);
    void Setup Item Trade Info(FPalItemBoothTradeInfo TradeInfo, bool RemoveButtonVisible);
    void AnmEvent_SoldOut();
    void AnmEvent_Normal();
    void BndEvt__WBP_Trading_Item_List_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_Trading_Item_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Trading_Item_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Trading_Item_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Construct();
    void ToggleSelect(bool Selected);
    void ExecuteUbergraph_WBP_Trading_Item_List(int32 EntryPoint);
    void OnTradeInfoUnhovered__DelegateSignature(int32 Index);
    void OnTradeInfoHovered__DelegateSignature(int32 Index);
    void OnTradeSelect__DelegateSignature(int32 Index);
    void OnClickedRemoveButton__DelegateSignature(int32 TradeIndex);
    void OnEmptySlotClicked__DelegateSignature();
};

#endif
