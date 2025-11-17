#ifndef UE4SS_SDK_BP_Action_GrapplingBase_HPP
#define UE4SS_SDK_BP_Action_GrapplingBase_HPP

class UBP_Action_GrapplingBase_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double JumpPower;
    bool IsEndCompleted;
    FQuat MeshRotationCache;
    FVector MeshLocationCache;
    class UAkAudioEvent* ReelingSE;
    class UNiagaraSystem* HitPointEffect;

    void EndProcess();
    void UpdateMeshRotation(float DeltaTime);
    void SetCharacterVelocity(FVector Velocity);
    void NotifyStartToWeapon(FVector HitLocation, double CoolTimeRate);
    void NotifyFinishToWeapon();
    void OnNotifyEnd_284045CE4BC4B2D43CCB2E9B3225F0C8(FName NotifyName);
    void OnNotifyBegin_284045CE4BC4B2D43CCB2E9B3225F0C8(FName NotifyName);
    void OnInterrupted_284045CE4BC4B2D43CCB2E9B3225F0C8(FName NotifyName);
    void OnBlendOut_284045CE4BC4B2D43CCB2E9B3225F0C8(FName NotifyName);
    void OnCompleted_284045CE4BC4B2D43CCB2E9B3225F0C8(FName NotifyName);
    void OnBeginAction();
    void OnBreakAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_GrapplingBase(int32 EntryPoint);
};

#endif
