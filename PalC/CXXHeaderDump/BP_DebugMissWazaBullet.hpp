#ifndef UE4SS_SDK_BP_DebugMissWazaBullet_HPP
#define UE4SS_SDK_BP_DebugMissWazaBullet_HPP

class ABP_DebugMissWazaBullet_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    class USceneComponent* DefaultSceneRoot;
    double Timer;

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_DebugMissWazaBullet(int32 EntryPoint);
};

#endif
