#ifndef UE4SS_SDK_WBP_Notice_Deathlog_HPP
#define UE4SS_SDK_WBP_Notice_Deathlog_HPP

class UWBP_Notice_Deathlog_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_In_Kill;
    class UWidgetAnimation* Anm_Out;
    class UWidgetAnimation* Anm_In;
    class UImage* Image_Arrow;
    class UImage* Image_AttackerIcon;
    class UImage* Image_DefenderIcon;
    class UBP_PalRichTextBlock_C* RichTextBlock_Attacker;
    class UBP_PalRichTextBlock_C* RichTextBlock_Defender;
    class UBP_PalRichTextBlock_C* RichTextBlock_Reason;
    class USizeBox* SizeBox_AttackerIcon;
    class USizeBox* SizeBox_DefenderIcon;
    bool Is Short;
    bool NowDisplayed;
    bool ShortDisplayEnd;
    bool LongDisplayEnd;
    FWBP_Notice_Deathlog_COnDeathLogEnd OnDeathLogEnd;
    void OnDeathLogEnd(class UWBP_Notice_Deathlog_C* EndedLog);
    bool IsKillLog;

    void SetupIcon(FPalKillLogDisplayData DisplayData);
    void GetDeathResonText(EPalKillLogDisplayType KillLogType, FText& ReasonText);
    void MakeKillLogText(FPalKillLogDisplayData DisplayData, FText& AttackerName, FText& DefenderName, FText& Reason);
    void SetupAsDeathLog(FPalKillLogDisplayData DeathLogDisplayData);
    void MakeDeathLogText(FPalKillLogDisplayData DisplayData, FText& AttackerName, FText& DefenderName, FText& Reason);
    void SetupAsKillLog(FPalKillLogDisplayData KillLogDIsplayData);
    void Finished_594550FE491318B188D5B8A2D194C1DB();
    void SetDisplayTime(double ShortDisplayTime, double LongDisplayTime);
    void SetDisplayTimeType(bool IsShort);
    void CheckDisplay_Short();
    void CheckDisplay_Long();
    void ExecuteUbergraph_WBP_Notice_Deathlog(int32 EntryPoint);
    void OnDeathLogEnd__DelegateSignature(class UWBP_Notice_Deathlog_C* EndedLog);
};

#endif
