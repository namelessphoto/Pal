#ifndef UE4SS_SDK_WBP_Buildup_Player_HPP
#define UE4SS_SDK_WBP_Buildup_Player_HPP

class UWBP_Buildup_Player_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_RankUp;
    class UHorizontalBox* HorizontalBox_BuildupGauge;
    class UImage* StatusArrow;
    class UBP_PalTextBlock_C* Text_BuildupStoneNum;
    class UBP_PalTextBlock_C* Text_Caution;
    class UBP_PalTextBlock_C* Text_HaveNum;
    class UBP_PalTextBlock_C* Text_Max;
    class UBP_PalTextBlock_C* Text_StatusNumAfter;
    class UBP_PalTextBlock_C* Text_StatusNumBefore;
    class UWBP_CommonButton_C* WBP_CommonButton;
    class UWBP_Menu_btn_C* WBP_Menu_btn_Close;
    TArray<class UWBP_Buildup_Gauge_C*> BuildupGauges;
    int32 TargetRank;
    bool IsBlock;
    FDataTableRowHandle RankupMsgId;
    bool ResultSuccess;
    bool Replicate_Relic;
    bool Replicate_Status;
    bool Requested;

    class UWidget* BP_GetDesiredFocusTarget();
    void UpdateRequiredInfos();
    void OnSetup();
    void BndEvt__WBP_Buildup_Player_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnReceiveResult(EPalCharacterStatusOperationResult Result);
    void ConfirmRankup(bool Confirmed);
    void SynchroCheck();
    void Replicated_Relic();
    void Replicated_Status();
    void Destruct();
    void BndEvt__WBP_Buildup_Player_WBP_Menu_btn_Close_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_WBP_Buildup_Player(int32 EntryPoint);
};

#endif
