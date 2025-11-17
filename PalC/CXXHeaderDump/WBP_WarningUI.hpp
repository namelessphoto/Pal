#ifndef UE4SS_SDK_WBP_WarningUI_HPP
#define UE4SS_SDK_WBP_WarningUI_HPP

class UWBP_WarningUI_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWBP_Warning_C* WBP_Warning;                                                // 0x0410 (size: 0x8)

    void WBP_WarningUI_AutoGenFunc();
    void DisplayServerNotice(FString NoticeMessage);
    void Play(FText TitleText, FText infoText, double DisplayTime);
    void DisplayWarning(class UPalBaseCampModel* TargetBaseCamp, FPalInvaderDatabaseRow ChosenInvaderData);
    void Display Supply(FPalSupplyInfo SupplyInfo);
    void OnReceivedServerNotice(FString NoticeMessage);
    void OnSupplyStart(FPalSupplyInfo SupplyInfo);
    void OnInvaderStart(const FPalIncidentBroadcastParameter& Parameter);
    void RegisterEvents();
    void OnInitialized();
    void ExecuteUbergraph_WBP_WarningUI(int32 EntryPoint);
}; // Size: 0x418

#endif
