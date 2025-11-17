#ifndef UE4SS_SDK_WBP_Notice_DeathAnnounce_HPP
#define UE4SS_SDK_WBP_Notice_DeathAnnounce_HPP

class UWBP_Notice_DeathAnnounce_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Loop;
    class UWidgetAnimation* Anm_Out;
    class UWidgetAnimation* Anm_In;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock;
    class UImage* Image_Base;
    class UImage* Image_Base_Flash;
    class UImage* Image_Base_Grd;
    class UImage* Image_BaseLine;
    TArray<FPalKillLogDisplayData> DisplayDataList;
    bool bIsDisplaying;
    FDataTableRowHandle PlayerDeathLogMsgID;
    FDataTableRowHandle PalDeathLogMsgID;
    double DisplayTime;
    FTimerHandle NowDisplayingWidgetEndTimer;
    FTimerHandle NowDisplayingWidgetCloseTimer;
    bool NewVar;

    void Display(bool& bSuccess);
    void OnAddedDeathLog(const FPalKillLogDisplayData& DeathLogDisplayData);
    void AnmEvent_In_WithEndTimer();
    void AnmEvent_End_ByTimer();
    void OnEndCloseAnim();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void カスタムイベント(const FPalKillLogDisplayData& DeathLogDisplayData);
    void カスタムイベント_0(const FPalKillLogDisplayData& DeathLogDisplayData);
    void ExecuteUbergraph_WBP_Notice_DeathAnnounce(int32 EntryPoint);
};

#endif
