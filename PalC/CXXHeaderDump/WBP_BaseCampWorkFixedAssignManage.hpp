#ifndef UE4SS_SDK_WBP_BaseCampWorkFixedAssignManage_HPP
#define UE4SS_SDK_WBP_BaseCampWorkFixedAssignManage_HPP

class UWBP_BaseCampWorkFixedAssignManage_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Default_In;
    class UWBP_AssignBoard_C* WBP_AssignBoard;
    TSoftObjectPtr<UWBP_AssignBoard_WorkListBase_C> LastSelectedWorkListContentWidget;
    TSoftObjectPtr<UWBP_AssignBoard_WorkListBase_C> LastHoveredWorkListContentWidget;
    EPalUIFixedAssignManageListSortType NowSortType;
    TArray<EPalUIFixedAssignManageListSortType> SortTypeOrder;
    TMap<class EPalUIFixedAssignManageListSortType, class FDataTableRowHandle> SortTypeNameMap;
    FPalDataTableRowName_UIInputAction SortInputAction;

    void UpdateWidgetList(bool ForceReferesh);
    void OnTriggerSort();
    void GetRestoreFocusTarget_WorkList(class UWidget*& TargetWidget);
    void OnUpdateAssignInfo(class UPalUIBaseCampWorkFixedAssignManageModel* Model);
    void RemoveAssign(FPalUIBaseCampWorkFixedAssignInfo AssignInfo);
    void ProccessAssign(FPalUIBaseCampWorkFixedAssignInfo AssignInfo, class UPalIndividualCharacterSlot* Slot);
    void AlreadyFixedAssign(FPalUIBaseCampWorkFixedAssignInfo AssignInfo, class UPalIndividualCharacterSlot* TargetSlot, bool& IsAlreadyFixedAssign);
    void CanAssign(FPalUIBaseCampWorkFixedAssignInfo AssignInfo, class UPalIndividualCharacterSlot* TargetSlot, bool& CanAssign);
    void OnCancelAction();
    void GetModel(class UPalUIBaseCampWorkFixedAssignManageModel*& Model);
    class UWidget* BP_GetDesiredFocusTarget();
    void BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_0_OnClickedWorkerSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButtonBase);
    void OnSetup();
    void BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_1_OnClickedWork__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget);
    void Destruct();
    void OnClose();
    void BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_2_OnTriggerRemoveAssignShortcut__DelegateSignature();
    void BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_3_OnHoveredWork__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget);
    void BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_4_OnUnhoveredWork__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget);
    void BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_6_OnClickedSortButton__DelegateSignature();
    void BndEvt__WBP_BaseCampWorkFixedAssignManage_WBP_AssignBoard_K2Node_ComponentBoundEvent_5_OnClickedCloseButton__DelegateSignature();
    void ExecuteUbergraph_WBP_BaseCampWorkFixedAssignManage(int32 EntryPoint);
};

#endif
