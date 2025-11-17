#ifndef UE4SS_SDK_BP_PalBiomeEffectController_HPP
#define UE4SS_SDK_BP_PalBiomeEffectController_HPP

class UBP_PalBiomeEffectController_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    EPalBiomeType Current Biome Type;
    class UNiagaraComponent* Current Particle System;

    void ReceiveTick(float DeltaSeconds);
    void On Biome Enter(EPalBiomeType Biome Type);
    void On Biome Exit();
    void ExecuteUbergraph_BP_PalBiomeEffectController(int32 EntryPoint);
};

#endif
