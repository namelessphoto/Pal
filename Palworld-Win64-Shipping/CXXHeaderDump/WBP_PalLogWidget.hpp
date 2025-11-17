#ifndef UE4SS_SDK_WBP_PalLogWidget_HPP
#define UE4SS_SDK_WBP_PalLogWidget_HPP

class UWBP_PalLogWidget_C : public UPalLogWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Default_In;
    class UCanvasPanel* CanvasPanel_22;
    class UBorder* ImportantBorder;
    class UScrollBox* ScrollBox_NormalLog;
    class UVerticalBox* VerticalBox_KillDeathLog;
    class UBorder* VeryImportantBorder;
    TArray<class UPalLogWidgetBase*> NormalLogList;
    TArray<class UPalLogWidgetBase*> ImportantLogList;
    double MoveTime;
    int32 MaxDisplayImportantLog;
    FSoftObjectPath Icon Path;
    TMap<class FGuid, class UPalLogWidgetBase*> veryImportantLogMap;
    float Normal Log Display Time;
    float Important Log Display Time;
    FGuid nowDisplayVeryImportantLog;
    double veryImportantLogDisplayTime;
    double veryImportantLogDisplayTimer;
    TArray<FGuid> veryImportantLogIDArray;
    TArray<class UWBP_Notice_Deathlog_C*> DeathLogList;
    float Death Log Short Display Time;
    float Death Log Long Display Time;
    TArray<class UWBP_Notice_Deathlog_C*> KillLogList;

    void CREATEDELEGATE_PROXYFUNCTION_0(const FPalKillLogDisplayData& DeathLogDisplayData);
    void OnKillLogEnd(class UWBP_Notice_Deathlog_C* EndedLog);
    void OnAddedKillLog(const FPalKillLogDisplayData& KillLogData);
    void OnDeathLogEnd(class UWBP_Notice_Deathlog_C* EndedLog);
    void DisplayNextVeryImportantLog();
    void CheckVeryImportantLog(double DeltaTime);
    void OnAddedDeathLog(FPalKillLogDisplayData DeathLogDisplayData);
    void OnRemovedVeryImportantLog(const FGuid& logId);
    void OnAddedVeryImportantLog(const FGuid& logId, const FText& LogText, const FPalLogAdditionalData& logAdditionalData);
    void CreateLogWidget(TSubclassOf<class UPalLogWidgetBase> logWidgeClass, FText Text, FPalLogAdditionalData AdditionalData, class UPalLogWidgetBase*& createdWidget);
    void CheckImportantLog(bool& isRemoved);
    void CheckRemoveLog(const TArray<class UPalLogWidgetBase*>& TargetArray, bool& Removed);
    void SetupWidgetTranslation(class UPalLogWidgetBase* TargetWidget, class UCanvasPanelSlot* relationSlot);
    void OnAddedImportantLog(const FText& LogText, const FPalLogAdditionalData& logAdditionalData);
    void On Added Normal Log(const FText& LogText, const FPalLogAdditionalData& logAdditionalData);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalLogWidget(int32 EntryPoint);
};

#endif
