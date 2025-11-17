#ifndef UE4SS_SDK_WBP_Arena_TopMenu_HPP
#define UE4SS_SDK_WBP_Arena_TopMenu_HPP

class UWBP_Arena_TopMenu_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_ButtonOut;
    class UWidgetAnimation* Anm_MenuInOut;
    class UWidgetAnimation* Anm_Out;
    class UWidgetAnimation* Anm_In;
    class UCanvasPanel* Canvas_MenuGuideText;
    class UCanvasPanel* Canvas_Wait;
    class UBP_PalTextBlock_C* Text_MenuGuide;
    class UWBP_Arena_PlayerRank_C* WBP_Arena_PlayerRank;
    class UWBP_Arena_TopMenuButton_C* WBP_Arena_TopMenuButton_PvP;
    class UWBP_Arena_TopMenuButton_C* WBP_Arena_TopMenuButton_Solo;
    class UWBP_Arena_TopMenuButton_C* WBP_Arena_TopMenuButton_Spectate;
    class APalArenaEntrance* Entrance;
    int32 LastFocusIndex;
    bool MenuOut;
    EPalArenaMenuActionType LastAction;

    class UWidget* BP_GetDesiredFocusTarget();
    void ChangeInfo(int32 Index, bool IsEnable);
    void CancelAction();
    void Top Menu Action(EPalArenaMenuActionType ActionType);
    void Setup();
    void Finished_55E66A6745B17F175A5608B05FCBDDC7();
    void AnmEvent_In();
    void AnmEvent_Out();
    void AnmEvent_MenuOut();
    void AnmEvent_MenuIn();
    void OnInitialized();
    void OnSetup();
    void Construct();
    void BndEvt__WBP_Arena_TopMenu_WBP_Arena_TopMenuButton_Solo_K2Node_ComponentBoundEvent_0_OnArenaButtonClicked__DelegateSignature();
    void BndEvt__WBP_Arena_TopMenu_WBP_Arena_TopMenuButton_PvP_K2Node_ComponentBoundEvent_1_OnArenaButtonClicked__DelegateSignature();
    void BndEvt__WBP_Arena_TopMenu_WBP_Arena_TopMenuButton_Spectate_K2Node_ComponentBoundEvent_2_OnArenaButtonClicked__DelegateSignature();
    void BndEvt__WBP_Arena_TopMenu_WBP_Arena_TopMenuButton_Solo_K2Node_ComponentBoundEvent_3_OnArenaButtonHovered__DelegateSignature();
    void BndEvt__WBP_Arena_TopMenu_WBP_Arena_TopMenuButton_Solo_K2Node_ComponentBoundEvent_4_OnArenaButtonUnhovered__DelegateSignature();
    void BndEvt__WBP_Arena_TopMenu_WBP_Arena_TopMenuButton_PvP_K2Node_ComponentBoundEvent_5_OnArenaButtonHovered__DelegateSignature();
    void BndEvt__WBP_Arena_TopMenu_WBP_Arena_TopMenuButton_PvP_K2Node_ComponentBoundEvent_6_OnArenaButtonUnhovered__DelegateSignature();
    void BndEvt__WBP_Arena_TopMenu_WBP_Arena_TopMenuButton_Spectate_K2Node_ComponentBoundEvent_7_OnArenaButtonHovered__DelegateSignature();
    void BndEvt__WBP_Arena_TopMenu_WBP_Arena_TopMenuButton_Spectate_K2Node_ComponentBoundEvent_8_OnArenaButtonUnhovered__DelegateSignature();
    void EmptyEvent(bool bResult);
    void ExecuteUbergraph_WBP_Arena_TopMenu(int32 EntryPoint);
};

#endif
