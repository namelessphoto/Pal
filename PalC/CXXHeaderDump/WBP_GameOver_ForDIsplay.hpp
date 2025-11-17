#ifndef UE4SS_SDK_WBP_GameOver_ForDIsplay_HPP
#define UE4SS_SDK_WBP_GameOver_ForDIsplay_HPP

class UWBP_GameOver_ForDIsplay_C : public UPalUIGameOver
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCircularThrobber* CircularThrobber_107;
    class UImage* Image_35;
    class UOverlay* Overlay_WaitingResetCharacter;
    class UWBP_GameOver_Defeat_C* WBP_GameOver_Defeat;
    FTimerHandle BlockRespawnTimerHandle;
    bool CanRespawn;
    FDataTableRowHandle ResetCharacterDialogMsgID;

    void HideWaiting();
    void ShowWaiting();
    void OnClosedCheckResetChaarcetrDialog(bool bResult);
    bool IsHardcoreView();
    void OnCancelAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnClickedRespawnButton();
    void OnFinishedClose();
    void OnFinishedOpen();
    void OnEndedRespawnBlockTime();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void Destruct();
    void ConfirmRespawn();
    void BndEvt__WBP_GameOver_ForDIsplay_WBP_GameOver_Defeat_K2Node_ComponentBoundEvent_0_OnClickResetCharacter__DelegateSignature();
    void ExecuteUbergraph_WBP_GameOver_ForDIsplay(int32 EntryPoint);
};

#endif
