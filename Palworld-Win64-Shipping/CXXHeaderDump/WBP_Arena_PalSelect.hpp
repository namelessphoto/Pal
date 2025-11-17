#ifndef UE4SS_SDK_WBP_Arena_PalSelect_HPP
#define UE4SS_SDK_WBP_Arena_PalSelect_HPP

class UWBP_Arena_PalSelect_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Out;
    class UWidgetAnimation* Anm_In;
    class UBP_PalTextBlock_C* BP_PalTextBlock_RivalName;
    class UBP_PalTextBlock_C* BP_PalTextBlock_SelfName;
    class UCanvasPanel* Canvas_Rival_Selected;
    class UBP_PalTextBlock_C* Text_TimerNum;
    class UWBP_Arena_PalDetail_C* WBP_Arena_PalDetail;
    class UWBP_Arena_PalSelect_PalSlot_C* WBP_Arena_PalSelect_PalSlot_Main;
    class UWBP_Arena_PalSelect_PalSlot_C* WBP_Arena_PalSelect_PalSlot_Main_R;
    class UWBP_Arena_PalSelect_PalSlot_C* WBP_Arena_PalSelect_PalSlot_Sub_0;
    class UWBP_Arena_PalSelect_PalSlot_C* WBP_Arena_PalSelect_PalSlot_Sub_1;
    class UWBP_Arena_PalSelect_PalSlot_C* WBP_Arena_PalSelect_PalSlot_Sub_0R;
    class UWBP_Arena_PalSelect_PalSlot_C* WBP_Arena_PalSelect_PalSlot_Sub_1R;
    class UWBP_Arena_PalSelect_Ready_C* WBP_Arena_PalSelect_Ready;
    class UWBP_Arena_PalSelect_Ready_C* WBP_Arena_PalSelect_Ready_1;
    class UWBP_CommonButton_2_C* WBP_CommonButton_Ready;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_1;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_2;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_3;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_4;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_5;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_6;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_7;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_8;
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_9;
    class UPalHUDDispatchParameter_ArenaPalSelect* As Pal HUDDispatch Parameter Arena Pal Select;
    FWBP_Arena_PalSelect_COnPartySet OnPartySet;
    void OnPartySet(FPalArenaPlayerParty NewParty);
    TArray<class UWBP_Menu_PalList_C*> SelfPalList;
    TArray<class UWBP_Menu_PalList_C*> RivalPalList;
    class UPalArenaSequencer* Arena Sequencer;
    bool EnableDetailPanel;
    FPalArenaPlayerParty CurrentParty;
    class UPalIndividualCharacterHandle* CurrentHoverHandle;
    FGuid ConfirmDialog;
    TArray<EPalTribeID> CurrentSelectPalTribes;
    bool IsSpectator;

    void Update Rival Party Slot(FPalArenaPlayerParty Party);
    void Cancel Spect();
    void IsRestrictedSelect(FPalArenaRule Rule, class UPalIndividualCharacterParameter* individualParam, bool& IsRestricted);
    void CancelSoloMatch();
    void ShowArenaRule();
    void ToggleDetailVisibility();
    class UWidget* BP_GetDesiredFocusTarget();
    void On Timer Updated(double Time);
    void Update Party Count UI(FPalArenaPlayerParty CurrentParty, bool IsRival);
    void Update Local Party Slot();
    void On Party Updated(EPalArenaPlayerIndex PlayerIndex, FPalArenaPlayerParty Party);
    void Toggle Select Party(class UPalIndividualCharacterHandle* CharacterHandle);
    void Display Detail(class UPalIndividualCharacterHandle* CharacterHandle);
    void CloseDetail();
    void SetupPalList(const TArray<class UPalIndividualCharacterParameter*>& PalList, bool IsRival);
    void SetupCharacterName();
    void Setup(bool IsSoloMode);
    void Finished_6CCB6F4C49947D6ED3DAE8939CE96337();
    void OnSetup();
    void BndEvt__WBP_Arena_PalSelect_WBP_CommonButton_2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnInitialized();
    void EmptyEvent();
    void ConfirmParty(bool Confirmed);
    void ClosePanel();
    void EmptyConfirm(bool IsConfirm);
    void AnmEvent_In();
    void OnUpdateSequence(class UPalArenaSequencer* Sequencer, EPalArenaSequenceType PrevType, EPalArenaSequenceType AfterType);
    void ExecuteUbergraph_WBP_Arena_PalSelect(int32 EntryPoint);
    void OnPartySet__DelegateSignature(FPalArenaPlayerParty NewParty);
};

#endif
