#ifndef UE4SS_SDK_BP_ActionInteractBase_HPP
#define UE4SS_SDK_BP_ActionInteractBase_HPP

class UBP_ActionInteractBase_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName InteractFlagName;
    FTimerHandle MovableTimer;

    void OnJumpDelegate(class UPalCharacterMovementComponent* Component);
    void EnableMove();
    void UnbindDelegates();
    void CancelInteract();
    void BindDelegates();
    void SetPlayerFlags(bool isDisable);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionInteractBase(int32 EntryPoint);
};

#endif
