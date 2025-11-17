#ifndef UE4SS_SDK_BP_PlayerSoundEmitterComponent_HPP
#define UE4SS_SDK_BP_PlayerSoundEmitterComponent_HPP

class UBP_PlayerSoundEmitterComponent_C : public UPalSoundEmitterComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector MoveVelocity;
    bool IsSprint;
    FVector SelfLocation;
    double MaxWalkSpeed;
    double MaxSprintSpeed;
    FTimerHandle TimerHandle;
    bool IsCrouching;
    bool IsSliding;

    void BPEmitSound(FName RowName, double Rate);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void カスタムイベント_0();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void カスタムイベント_1(class UPalCharacterMovementComponent* Component, const FHitResult& Hit);
    void ExecuteUbergraph_BP_PlayerSoundEmitterComponent(int32 EntryPoint);
};

#endif
