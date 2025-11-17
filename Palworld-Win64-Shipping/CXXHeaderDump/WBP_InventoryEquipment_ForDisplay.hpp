#ifndef UE4SS_SDK_WBP_InventoryEquipment_ForDisplay_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_ForDisplay_HPP

class UWBP_InventoryEquipment_ForDisplay_C : public UPalUIInventoryEquipment
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_InventoryEquipment_C* WBP_InventoryEquipment;
    class UBP_InGameMenuInventoryModel_C* Model;
    FPalDataTableRowName_UIInputAction SimulateStatusPointInput;
    FPalDataTableRowName_UIInputAction ConfirmStatusPointInput;
    FPalDataTableRowName_UIInputAction ToggleQuickStackInput;
    FPalDataTableRowName_UIInputAction ToQuickStackButtonInput;

    void ToggleQuickStack();
    void OnCloseChangePlayerNameWindow(class UPalHUDDispatchParameterBase* Param);
    void OpenNameEditWindow();
    void OnEndGlide();
    void OnStartGlide();
    void Try Start Simulate Status Point();
    void Setup Static Input Action();
    void CancelSimulateStatusPoint();
    void IsSimulatingStatusPoint(bool& IsSimulating);
    class UWidget* BP_GetDesiredFocusTarget();
    void OnUpdateInventoryWeight(float NowWeight);
    void Setup(class UBP_InGameMenuInventoryModel_C* Model);
    void Construct();
    void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_0_OnClickedItemDrop__DelegateSignature();
    void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_1_OnClickedItemDestroy__DelegateSignature();
    void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_2_OnConfirmStatusPointEdit__DelegateSignature(TMap<FName, int32> PointMap);
    void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_3_OnRequestSwapEquipment__DelegateSignature(EPalPlayerEquipItemSlotType EquipType);
    void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_4_OnClickedSortButton__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_5_OnClickedChangePlayerNameButton__DelegateSignature();
    void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_7_OnClickedItemEat__DelegateSignature();
    void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_8_OnClickedToggleHeadDressing__DelegateSignature();
    void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_9_OnClickedToggleBodyDressing__DelegateSignature();
    void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_10_OnClickedToggleGliderDressing__DelegateSignature();
    void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_6_OnClickQuickStackButton__DelegateSignature(TArray<FPalItemSlotId>& SlotIds);
    void ExecuteUbergraph_WBP_InventoryEquipment_ForDisplay(int32 EntryPoint);
};

#endif
