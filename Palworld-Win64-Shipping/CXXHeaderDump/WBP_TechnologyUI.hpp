#ifndef UE4SS_SDK_WBP_TechnologyUI_HPP
#define UE4SS_SDK_WBP_TechnologyUI_HPP

class UWBP_TechnologyUI_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_InventoryEquipment_ItemInfo_C* WBP_InventoryEquipment_ItemInfo;
    class UWBP_MainMenu_Technology_00_C* WBP_MainMenu_Technology_00;
    FDataTableRowHandle UnlockCheckMsgId;
    class UWBP_MainMenu_Technology_Content_C* lastSelectedButton;
    FVector2D MouseDragScrollMultiply;
    class UWBP_MainMenu_Technology_Content_C* LastHoveredTechnologyPanel;
    FWBP_TechnologyUI_COnAllClearedNewFlag OnAllClearedNewFlag;
    void OnAllClearedNewFlag(TEnumAsByte<EPalUIInGameMainMenuTabType> Tab);
    FText CurrentFilterName;
    TSet<EPalItemTypeA> CurrentItemTypeFilter;
    TSet<EPalBuildObjectTypeA> CurrentBuildTypeFilter;
    bool CurrentShowUnlocked;
    FTimerHandle DelayDisplayTimer;

    void CanClose(bool& CanCloseFlag);
    void On Category Filter Applied(TSet<EPalItemTypeA> ItemTypes, TSet<EPalBuildObjectTypeA> BuildTypes, bool ShowUnlocked);
    void SetTechnologyFilter();
    void On Unlocked Any Technology();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnUnhoveredTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnHoveredTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void On Close Dialog(bool bResult);
    void OnClickedTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    void Setup();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_3_OnClickedTchnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_4_OnHoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_5_OnUnhoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void Destruct();
    void BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_1_OnNameFilterApplied__DelegateSignature(FText newText);
    void BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_2_OnFilterButtonClicked__DelegateSignature();
    void DelayDisplay();
    void ExecuteUbergraph_WBP_TechnologyUI(int32 EntryPoint);
    void OnAllClearedNewFlag__DelegateSignature(TEnumAsByte<EPalUIInGameMainMenuTabType> Tab);
};

#endif
