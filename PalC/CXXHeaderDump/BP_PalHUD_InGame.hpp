#ifndef UE4SS_SDK_BP_PalHUD_InGame_HPP
#define UE4SS_SDK_BP_PalHUD_InGame_HPP

class ABP_PalHUD_InGame_C : public APalHUDInGame
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class UWBP_PalLiftItem_C* UMG_LiftItem;
    TMap<class TSubclassOf<UPalUserWidget>, class EPalHUDWidgetPriority> PriorityMap;
    TMap<class TSubclassOf<UPalUserWidget>, class UPalUserWidget*> CreatedWidgetMap;
    FGuid NewVar;
    bool GameOverUIBinded;

    void CREATEDELEGATE_PROXYFUNCTION_0(class APalPlayerCharacter* PlayerCharacter, const FPalDyingEndInfo& DyingEndInfo);
    void OnEndTrialGame();
    void RegisterTrialModeEvent();
    void DisplayHUD_Respawn();
    void HideHUD_ForDeath();
    void UpdateWorldHUDs();
    void OnUpdateLiftSlot();
    void HideLiftItemDisplay();
    void ShowLiftItemDisplay();
    void Setup Lift Item Event();
    void SetupHUD_Internal();
    void OnLoaded_39EEADC54AE57646EA72A79D911211B6(UClass* Loaded);
    void OnLoaded_EF35A3894C280426B58FA0A0D5280930(UClass* Loaded);
    void OnLoaded_01D7FBF3483366434C8293A197BFD965(UClass* Loaded);
    void ReceiveTick(float DeltaSeconds);
    void Initialize();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void AsyncSetupHUDEvent();
    void AsyncLoadAndCreateWidget(TSoftClassPtr<UPalUserWidget> WidgetClass);
    void OnDyingEnd(class APalPlayerCharacter* PlayerCharacter, FPalDyingEndInfo DyingEndInfo);
    void OnRespawnPlayer(class APalPlayerCharacter* Player);
    void BindGameOverUI();
    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
    void ExecuteUbergraph_BP_PalHUD_InGame(int32 EntryPoint);
};

#endif
