#ifndef UE4SS_SDK_BP_PalGameInstance_HPP
#define UE4SS_SDK_BP_PalGameInstance_HPP

class UBP_PalGameInstance_C : public UPalGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULoadingProcessTask* CurrentLoadingTask;
    class UPalHUDDispatchParameter_FadeWidget* LoadingFadeParameter;
    TSoftObjectPtr<UWorld> LoadWorld;
    bool ShowedCharaMake;
    TSoftClassPtr<APalCutsceneActor> OpeningActor;
    FName CutsceneName;
    class APalCutsceneActor* OpeningCutscene;
    FName flagName;
    int32 PlayingID;
    FDataTableRowHandle CreateSessionErrorMsgId;
    FDataTableRowHandle CreateSessionErrorMsgId_Console;
    bool IsStartingGame;
    FName UIInputBlockFlagName;

    void IsDeadInHardcore(bool& Result);
    void SetActivePlayerActor(bool Active);
    void BP_PalGameInstance_AutoGenFunc(bool bResult);
    void Completed_32AFD11A49E65B7255FF4BA375D305CC(bool IsSuccess, FString ErrorStr);
    void StartLoading(const class UWBP_LoadingScreen_Transition_C*& CurrentLoadingWidget);
    void LoadingFinished();
    void ShowCharacterMakeScreen();
    void OnFinishCutscene(bool IsSkipped);
    void LoadLevel(const TSoftObjectPtr<UWorld> Level, const FString& Options, bool AutoClose);
    void SetupGameInit();
    void StartOpening();
    void StartGame(bool bNewGame, bool bListenServer, bool bCrossPlay);
    void カスタムイベント(bool bResult);
    void OnShowSelectRespawnMap();
    void SetPlayerSelectMap(bool IsSelecting);
    void OnCloseMap(class UPalHUDDispatchParameterBase* Param);
    void OnCompleteSetup();
    void OverrideLoadMap(const TSoftObjectPtr<UWorld>& World);
    void OnPSNChatDisabled(bool bResult);
    void ExecuteUbergraph_BP_PalGameInstance(int32 EntryPoint);
};

#endif
