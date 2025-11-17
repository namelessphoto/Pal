#ifndef UE4SS_SDK_BP_VisualEffect_PalEffectFadeOut_HPP
#define UE4SS_SDK_BP_VisualEffect_PalEffectFadeOut_HPP

class UBP_VisualEffect_PalEffectFadeOut_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class UNiagaraComponent*> Effects;
    double FadeTimer;
    double FadeTime;
    FName ParameterName;
    FName TagName;

    void OnBeginVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut(int32 EntryPoint);
};

#endif
