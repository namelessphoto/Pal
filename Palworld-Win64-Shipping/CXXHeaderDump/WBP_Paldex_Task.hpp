#ifndef UE4SS_SDK_WBP_Paldex_Task_HPP
#define UE4SS_SDK_WBP_Paldex_Task_HPP

class UWBP_Paldex_Task_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Ingame_Flash;
    class UWidgetAnimation* AnmOutGame_Complete;
    class UWidgetAnimation* AnmIngame_Complete;
    class UWidgetAnimation* Anm_Outgame;
    class UWidgetAnimation* Anm_Ingame;
    class UCanvasPanel* CanvasPanelIngame;
    class UCanvasPanel* CanvasPanelOutgame;
    class UImage* Flare_01;
    class UImage* Flare_B_00;
    class UImage* Flare_Cross_0;
    class UImage* Flare_Cross_1;
    class UImage* Flare_T_00;
    class UImage* Image_Complete;
    class UImage* Image_GaugeFlare_0;
    class UImage* Image_TaskIcon;
    class UProgressBar* ProgressBar_CaptureBonus;
    class UProgressBar* ProgressBar_CaptureBonus_Back;
    class UBP_PalTextBlock_C* Text_CaptureNum;
    class UBP_PalTextBlock_C* Text_CaptureNumOutGame;
    class UBP_PalTextBlock_C* Text_ExpBonus;
    FDataTableRowHandle ExpBonusMsgID_Normal;
    FDataTableRowHandle ExpBonusMsgID_First;
    FDataTableRowHandle ExpBonusMsgID_Capture5;
    FDataTableRowHandle ExpBonusMsgID_Complete;
    int32 CachedBonusCount;

    void SetupBonusCountText(int32 BonusCount);
    void SetupForMenu(int32 BonusCount);
    void GetBonusExpMsg(int32 CaptureCount, FText& Text);
    void PreSetup(FName CharacterID, int32 BonusCount, int32 DisplayExp);
    void OnInitialized();
    void AnmEvent_Flash();
    void AnmEvent_Activate(bool AlreadyCompletedBonus);
    void ExecuteUbergraph_WBP_Paldex_Task(int32 EntryPoint);
};

#endif
