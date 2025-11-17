#ifndef UE4SS_SDK_BP_Action_FishingSalvage_HPP
#define UE4SS_SDK_BP_Action_FishingSalvage_HPP

class UBP_Action_FishingSalvage_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimMontage* StartAnimMontage;
    class UAnimMontage* IdleLoopAnimMontage;
    class UAnimMontage* BattleLoopAnimMontage;
    class UAnimMontage* EndAnimMontage;
    class UAnimMontage* SuccessMontage;
    class UAnimMontage* FailedMontage;
    FName flagName;
    class UPalFishingComponent* FishingComponent;
    double ThrowForwardOffset;
    double WaterPlaneCheckHeightOffset;
    double WaterPlaneCheckLength;

    void FinishSalvageGame();
    void GetThrowLocation(FVector& WaterLocation);
    void SetUseUpperBodyOnly(bool Enable);
    void NotifySalvageEndToWeapon();
    void NotifySalvageStartToWeapon(FVector ThrowLocation);
    void EndAnim();
    void SetupAnim();
    void SetMoveState_Gravity(bool isDisable);
    void SetMoveState_BlowVelocity(bool isDisable);
    void SetMoveState_Common(bool isDisable);
    void OnNotifyEnd_04002E4E41E83AFF32177783C16C6AF7(FName NotifyName);
    void OnNotifyBegin_04002E4E41E83AFF32177783C16C6AF7(FName NotifyName);
    void OnInterrupted_04002E4E41E83AFF32177783C16C6AF7(FName NotifyName);
    void OnBlendOut_04002E4E41E83AFF32177783C16C6AF7(FName NotifyName);
    void OnCompleted_04002E4E41E83AFF32177783C16C6AF7(FName NotifyName);
    void OnNotifyEnd_F3355E1D4316C15ACD4B1A80526070EA(FName NotifyName);
    void OnNotifyBegin_F3355E1D4316C15ACD4B1A80526070EA(FName NotifyName);
    void OnInterrupted_F3355E1D4316C15ACD4B1A80526070EA(FName NotifyName);
    void OnBlendOut_F3355E1D4316C15ACD4B1A80526070EA(FName NotifyName);
    void OnCompleted_F3355E1D4316C15ACD4B1A80526070EA(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_FishingSalvage(int32 EntryPoint);
};

#endif
