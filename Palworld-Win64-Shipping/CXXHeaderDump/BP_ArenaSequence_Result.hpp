#ifndef UE4SS_SDK_BP_ArenaSequence_Result_HPP
#define UE4SS_SDK_BP_ArenaSequence_Result_HPP

class UBP_ArenaSequence_Result_C : public UPalArenaSequenceBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class APalCharacter*> MontagePlayCharacters;
    TArray<class APalCharacter*> Inactivated Characters;
    FBP_ArenaSequence_Result_COnDraw OnDraw;
    void OnDraw();
    FBP_ArenaSequence_Result_COnWin OnWin;
    void OnWin(FString WinnerName);
    FBP_ArenaSequence_Result_COnCutsceneFinish OnCutsceneFinish;
    void OnCutsceneFinish();
    FBP_ArenaSequence_Result_COnSetResult OnSetResult;
    void OnSetResult();

    void PlayResultSound();
    void SetDisableLookAtAllPal(bool isDisable);
    void ToggleLocalInput(bool isDisable);
    void InactivateCharacter(class APalCharacter* Character);
    void GetOffAllPlayer();
    void StopMontages();
    void PlayResultMontage(class APalCharacter* Character, class UAnimMontage* AnimMontage);
    void Set Disable Movement(bool isDisable);
    bool IsWinPlayerIndex(EPalArenaPlayerIndex PlayerIndex);
    void SetupFormation();
    void End Process();
    void OnBeginSequence();
    void OnFinishCutscene(bool bIsSkipped);
    void ExecuteUbergraph_BP_ArenaSequence_Result(int32 EntryPoint);
    void OnSetResult__DelegateSignature();
    void OnCutsceneFinish__DelegateSignature();
    void OnWin__DelegateSignature(FString WinnerName);
    void OnDraw__DelegateSignature();
};

#endif
