#ifndef UE4SS_SDK_BP_Explosion_Low_HPP
#define UE4SS_SDK_BP_Explosion_Low_HPP

class ABP_Explosion_Low_C : public ABP_ExplosionAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Explosive;

    void BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem);
    void ExecuteUbergraph_BP_Explosion_Low(int32 EntryPoint);
};

#endif
