#ifndef UE4SS_SDK_BP_ActionCutPalMeat_Player_HPP
#define UE4SS_SDK_BP_ActionCutPalMeat_Player_HPP

class UBP_ActionCutPalMeat_Player_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APalCharacter* TargetCharacter;
    bool IsDeletePal;

    void Use Meat Cut Knife(bool& UseKnife);
    void IsValidTarget(bool& IsValid);
    void SetDisableFlag(bool Disable);
    void ChangePalFacial(EPalFacialEyeType Eye);
    void PlayDamageMotion();
    void FixCutTarget();
    void OnNotifyEnd_5AC216CE4E407711113F20B709C84DB5(FName NotifyName);
    void OnNotifyBegin_5AC216CE4E407711113F20B709C84DB5(FName NotifyName);
    void OnInterrupted_5AC216CE4E407711113F20B709C84DB5(FName NotifyName);
    void OnBlendOut_5AC216CE4E407711113F20B709C84DB5(FName NotifyName);
    void OnCompleted_5AC216CE4E407711113F20B709C84DB5(FName NotifyName);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionCutPalMeat_Player(int32 EntryPoint);
};

#endif
