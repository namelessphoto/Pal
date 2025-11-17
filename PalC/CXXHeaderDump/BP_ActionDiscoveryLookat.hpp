#ifndef UE4SS_SDK_BP_ActionDiscoveryLookat_HPP
#define UE4SS_SDK_BP_ActionDiscoveryLookat_HPP

class UBP_ActionDiscoveryLookat_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagra;

    void TurnToTargetOneFrame();
    void OnFinishedFX(class UNiagaraComponent* PSystem);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionDiscoveryLookat(int32 EntryPoint);
};

#endif
