#ifndef UE4SS_SDK_WBP_Trading_Pal_Buy_HPP
#define UE4SS_SDK_WBP_Trading_Pal_Buy_HPP

class UWBP_Trading_Pal_Buy_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* CanvasPanel_BuyPanel;
    class UBP_PalTextBlock_C* Text_LevelValue;
    class UBP_PalTextBlock_C* Text_PalName;
    class UWBP_CommonButton_C* WBP_CommonButton;
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;
    class UWBP_IngameMenu_WorkSpace_Item_C* WBP_IngameMenu_WorkSpace_Item;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UWBP_NoData_C* WBP_NoData;
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List;
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_1;
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_2;
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_3;
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_4;
    TArray<class UWBP_Trading_Item_List_C*> TradeList;
    class UPalMapObjectPalBoothModel* PalBoothModel;
    int32 CurrentSelectIndex;
    bool Tradeable;
    class UPalIndividualCharacterHandle* LastHoveredTradePalHandle;
    bool IsPined;
    FPalUIActionBindData ViewDetailInputHandle;
    class UPalIndividualCharacterHandle* PinedPalHandle;

    void UpdateSellList();
    void OnTradeComplete(class APalPlayerState* PlayerState);
    void OnStoreSlotUpdate(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle);
    void On Character Container Update(class UPalIndividualCharacterContainer* CharacterContainer);
    void OnViewDetailInput();
    void Set Detail Enable(bool IsEnable);
    void OnCancelAction();
    void CheckTradeable();
    class UWidget* BP_GetDesiredFocusTarget();
    void Setup();
    void Switch Trading Panel(bool Visible);
    void OnTradeUnhovered(int32 TradeIndex);
    void OnTradeHovered(int32 TradeIndex);
    void OnTradeSelected(int32 Index);
    void OnInitialized();
    void OnSetup();
    void BndEvt__WBP_Trading_Pal_Buy_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_Trading_Pal_Buy_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void Destruct();
    void ExecuteUbergraph_WBP_Trading_Pal_Buy(int32 EntryPoint);
};

#endif
