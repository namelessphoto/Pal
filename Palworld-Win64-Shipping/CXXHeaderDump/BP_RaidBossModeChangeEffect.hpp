#ifndef UE4SS_SDK_BP_RaidBossModeChangeEffect_HPP
#define UE4SS_SDK_BP_RaidBossModeChangeEffect_HPP

class ABP_RaidBossModeChangeEffect_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    class USceneComponent* DefaultSceneRoot;
    class APalCharacter* TargetCharacter;

    void Set Target Pal(class APalCharacter* Pal);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_RaidBossModeChangeEffect(int32 EntryPoint);
};

#endif
