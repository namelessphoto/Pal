#ifndef UE4SS_SDK_WBP_Buildup_Pal_HPP
#define UE4SS_SDK_WBP_Buildup_Pal_HPP

class UWBP_Buildup_Pal_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_Tab;
    class UImage* Select;
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item;
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item_1;
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item_2;
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item_3;
    class UWBP_Buildup_Pal_Status_C* WBP_Buildup_Pal_Status;
    class UWBP_Buildup_TabButton_C* WBP_Buildup_TabButton_Reset;
    class UWBP_Buildup_TabButton_C* WBP_Buildup_TabButton_Upgrade;
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_1;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_2;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_3;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_4;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;
    TArray<class UWBP_Menu_PalList_C*> PalList;
    TArray<class UWBP_Buildup_Pal_Item_C*> UpgradeItems;
    TArray<FName> UpgradeItemIds;
    FDataTableRowHandle PreTabMsgId;
    FDataTableRowHandle NextTabMsgId;
    class UPalIndividualCharacterHandle* CurrentHandle;
    bool PinDetail;
    bool Hovering;
    int32 CurrentTab;
    bool ResultSuccess;
    bool Replicate_Status;
    bool Requested;
    FTimerHandle ItemUpdateTimer;

    void UpdateItemInfo();
    class UWidget* BP_GetDesiredFocusTarget();
    void ReciveResult(EPalCharacterStatusOperationResult Result);
    void Refresh Info();
    void InvokeReset();
    void Invoke Rankup(TMap<EPalCharacterStatusOperationName, int32> StatusMap);
    void CloseAction();
    void On Click Pal List(class UPalIndividualCharacterHandle* Handle);
    void OnUnhoverPalList();
    void OnHoverPalList(class UPalIndividualCharacterHandle* Handle);
    void Setup();
    void OnSetup();
    void Destruct();
    void SwitchUpgrade();
    void SwitchReset();
    void SwitchTab(int32 Tab);
    void SynchroCheck();
    void Replicated_Status();
    void BndEvt__WBP_Buildup_Pal_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Buildup_Pal(int32 EntryPoint);
};

#endif
