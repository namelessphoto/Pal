#ifndef UE4SS_SDK_WBP_OperatingTable_HPP
#define UE4SS_SDK_WBP_OperatingTable_HPP

class UWBP_OperatingTable_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_ItemList;
    class UCanvasPanel* CanvasPanel_1;
    class UHorizontalBox* HorizontalBox_Tab;
    class UImage* Select;
    class UBP_PalTextBlock_C* Text_GuildMenberHead;
    class UWBP_Buildup_TabButton_C* WBP_Buildup_TabButton_Gender;
    class UWBP_Buildup_TabButton_C* WBP_Buildup_TabButton_Passive;
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;
    class UWBP_MainMenu_PalSkillInfo_C* WBP_MainMenu_PalSkillInfo;
    class UWBP_Menu_btn_C* WBP_Menu_btn_Close;
    class UWBP_Menu_btn_C* WBP_Menu_btn_ListClose;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_1;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_2;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_3;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_4;
    class UWBP_OperatingTable_TabPage_C* WBP_OperatingTable_TabPage;
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList_Item;
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;
    TArray<class UWBP_Menu_PalList_C*> PalList;
    class UPalMapObjectOperatingTableModel* OperatingTableModel;
    bool Hovering;
    class UPalIndividualCharacterHandle* CurrentHandle;
    bool PinDetail;
    bool Requested;
    int32 CurrentTab;
    bool ParamUpdated;
    bool Notified;
    class UPalIndividualCharacterParameter* BindedCharacterParam;
    bool Updated;

    void OnInventoryUpdate(class UPalItemContainer* Container);
    void OnHoveredPalPassiveSlot(class UWBP_MainMenu_Pal_Skill_Passive_C* Widget);
    void OnUnhoveredPasssiveItem();
    void OnHoveredPassiveItem(class UWBP_OperatingTable_ItemList_C* Widget);
    void On Select Passive Change(FName PassiveId);
    class UWidget* BP_GetDesiredFocusTarget();
    void SetupPassiveChangeItem();
    void CloseAction();
    void On Click Pal List(class UPalIndividualCharacterHandle* Handle);
    void OnUnhoverPalList();
    void OnHoverPalList(class UPalIndividualCharacterHandle* Handle);
    void Setup();
    void OnSetup();
    void OnInitialized();
    void OnOperatingPassiveNotifyied(bool Success);
    void Destruct();
    void BndEvt__WBP_OperatingTable_WBP_Menu_btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void SwitchPassive();
    void SwitchGender();
    void SwitchTab(int32 Tab);
    void BndEvt__WBP_OperatingTable_WBP_OperatingTable_TabPage_K2Node_ComponentBoundEvent_1_OnRequireChangeSelectItem__DelegateSignature();
    void BndEvt__WBP_OperatingTable_WBP_Menu_btn_ListClose_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_OperatingTable_WBP_OperatingTable_TabPage_K2Node_ComponentBoundEvent_3_OnHoveredOtomoPassiveSlot__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Passive_C* Widget);
    void BndEvt__WBP_OperatingTable_WBP_OperatingTable_TabPage_K2Node_ComponentBoundEvent_4_OnUnhoveredOtomoPassiveSlot__DelegateSignature();
    void BndEvt__WBP_OperatingTable_WBP_OperatingTable_TabPage_K2Node_ComponentBoundEvent_6_RequestChangePassiveSkill__DelegateSignature(FName PassiveId, int32 SlotIndex);
    void OnOperatingGenderNotifyied(bool Success);
    void BndEvt__WBP_OperatingTable_WBP_OperatingTable_TabPage_K2Node_ComponentBoundEvent_5_RequestChangeGender__DelegateSignature(class UPalIndividualCharacterParameter* CharacterParam);
    void OnPassiveUpdate(const TArray<FName>& PassiveIds);
    void OnGenderUpdate(EPalGenderType NewGender);
    void ExecuteUbergraph_WBP_OperatingTable(int32 EntryPoint);
};

#endif
