#ifndef UE4SS_SDK_BP_ActionDeath_HPP
#define UE4SS_SDK_BP_ActionDeath_HPP

class UBP_ActionDeath_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double DestoryInterval;
    FTransform DefaultTransform;
    FTimerHandle DestoryHandle;
    bool DownForceAble;
    bool NoEffect;
    FVector preLocation;
    FVector Velocity;
    bool EnableRagdoll;
    FName flagName;
    bool NeedReset;

    void IsRagdollMesh(bool& IsRagdoll);
    void SetDisableMovement(bool isDisable);
    void GetCharacterAnimInstance(class UAnimInstance*& AnimInstance);
    void InWaterFloat();
    void SetLiftUpAble();
    void BlowScale(double& Scale);
    void BlowCharacter();
    void OnLoaded_262CCA3245DB10CE95CE098A425EF51F(class UObject* Loaded);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void ShowEffect();
    void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
    void OnCompleteInitializeParameter(class APalCharacter* InCharacter);
    void ApplyRagdoll();
    void OnStillInWorldTriggered();
    void ResetRagdoll();
    void ExecuteUbergraph_BP_ActionDeath(int32 EntryPoint);
};

#endif
