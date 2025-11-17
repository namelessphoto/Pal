#ifndef UE4SS_SDK_WBP_Arena_RankingBoard_HPP
#define UE4SS_SDK_WBP_Arena_RankingBoard_HPP

class UWBP_Arena_RankingBoard_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_In;
    class UScrollBox* ScrollBox_0;
    class UWBP_Arena_RankingBoard_List_C* WBP_Arena_RankingBoard_List_Player;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    int32 LastHoveredIndex;

    void OnLocalPlayerInfoReplicated(FPalArenaWorldRankingRecord RankingInfo);
    void OnListHovered(class UWidget* Widget);
    class UWidget* Do Custom Navigation_Left(EUINavigation Navigation);
    class UWidget* DoCustomNavigation_Right(EUINavigation Navigation);
    class UWidget* BP_GetDesiredFocusTarget();
    void Setup();
    void Finished_0CE00FEB491F3446724290B53E54505B();
    void BndEvt__WBP_Arena_RankingBoard_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnSetup();
    void Construct();
    void CloseAnm();
    void ExecuteUbergraph_WBP_Arena_RankingBoard(int32 EntryPoint);
};

#endif
