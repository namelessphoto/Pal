#ifndef UE4SS_SDK_WBP_GameOver_ForDIsplay_HPP
#define UE4SS_SDK_WBP_GameOver_ForDIsplay_HPP

class UWBP_GameOver_ForDIsplay_C : public UPalUIGameOver
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UCircularThrobber* CircularThrobber_107;                                    // 0x0438 (size: 0x8)
    class UImage* Image_35;                                                           // 0x0440 (size: 0x8)
    class UOverlay* Overlay_WaitingResetCharacter;                                    // 0x0448 (size: 0x8)
    class UWBP_GameOver_Defeat_C* WBP_GameOver_Defeat;                                // 0x0450 (size: 0x8)
    FTimerHandle BlockRespawnTimerHandle;                                             // 0x0458 (size: 0x8)
    bool CanRespawn;                                                                  // 0x0460 (size: 0x1)
    FDataTableRowHandle ResetCharacterDialogMsgID;                                    // 0x0468 (size: 0x10)

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
}; // Size: 0x478

#endif
