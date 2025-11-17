#ifndef UE4SS_SDK_BP_ArenaSequence_PreBattle_HPP
#define UE4SS_SDK_BP_ArenaSequence_PreBattle_HPP

class UBP_ArenaSequence_PreBattle_C : public UPalArenaSequenceBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBP_ArenaSequence_PreBattle_CActivateReadyUI ActivateReadyUI;
    void ActivateReadyUI();

    void ToggleMutePals(bool DisableCrying);
    void SetDisableLookAtAllPal(bool isDisable);
    void OnCameraTarget(EPalArenaPlayerIndex PlayerIndex);
    void PlayCutscene();
    void FadeIn();
    void RideLeaderPal();
    void SetupLocalPlayerCamera();
    void ActivatePals();
    void SetupFormation();
    void OnBeginSequence();
    void OnEndSequence();
    void OnFinishCutscene(bool bIsSkipped);
    void ExecuteUbergraph_BP_ArenaSequence_PreBattle(int32 EntryPoint);
    void ActivateReadyUI__DelegateSignature();
};

#endif
