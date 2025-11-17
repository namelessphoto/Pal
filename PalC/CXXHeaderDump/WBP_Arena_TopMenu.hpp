#ifndef UE4SS_SDK_WBP_Arena_TopMenu_HPP
#define UE4SS_SDK_WBP_Arena_TopMenu_HPP

class UWBP_Arena_TopMenu_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anm_ButtonOut;                                            // 0x0438 (size: 0x8)
    class UWidgetAnimation* Anm_MenuInOut;                                            // 0x0440 (size: 0x8)
    class UWidgetAnimation* Anm_Out;                                                  // 0x0448 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0450 (size: 0x8)
    class UCanvasPanel* Canvas_MenuGuideText;                                         // 0x0458 (size: 0x8)
    class UCanvasPanel* Canvas_Wait;                                                  // 0x0460 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MenuGuide;                                         // 0x0468 (size: 0x8)
    class UWBP_Arena_PlayerRank_C* WBP_Arena_PlayerRank;                              // 0x0470 (size: 0x8)
    class UWBP_Arena_TopMenuButton_C* WBP_Arena_TopMenuButton_PvP;                    // 0x0478 (size: 0x8)
    class UWBP_Arena_TopMenuButton_C* WBP_Arena_TopMenuButton_Solo;                   // 0x0480 (size: 0x8)
    class UWBP_Arena_TopMenuButton_C* WBP_Arena_TopMenuButton_Spectate;               // 0x0488 (size: 0x8)
    class APalArenaEntrance* Entrance;                                                // 0x0490 (size: 0x8)
    int32 LastFocusIndex;                                                             // 0x0498 (size: 0x4)
    bool MenuOut;                                                                     // 0x049C (size: 0x1)
    EPalArenaMenuActionType LastAction;                                               // 0x049D (size: 0x1)

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
}; // Size: 0x49E

#endif
