#ifndef UE4SS_SDK_BP_PalCutsceneCamera_HPP
#define UE4SS_SDK_BP_PalCutsceneCamera_HPP

class ABP_PalCutsceneCamera_C : public ACineCameraActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneCaptureComponent2D* SceneCaptureComponent2D;
    TMap<class EPalBossType, class TSoftClassPtr<UWBP_BossDemoBase_C>> BossDemoWidgetMap;
    class UAsyncAction_CreateWidgetAsync* BossDemoLoadAsyncAction;
    EPalBossType WaitLoadWidgetBossType;
    class UWBP_BossDemoBase_C* DisplayWidget;

    void StopBossDemoWidget();
    void DisplayLoadedBossDemoWidget();
    void PreSetupBossDemoCapture();
    void OnComplete_42DB55244656A42BFC71E984CB1360D8(class UUserWidget* UserWidget);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void StartLoadBossDemoWidgetAsync(EPalBossType BossType);
    void ExecuteUbergraph_BP_PalCutsceneCamera(int32 EntryPoint);
};

#endif
