#ifndef UE4SS_SDK_BP_VisualEffect_Fadeout_HPP
#define UE4SS_SDK_BP_VisualEffect_Fadeout_HPP

class UBP_VisualEffect_Fadeout_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double FadeTime;
    double FadeTimer;

    void TickVisualEffect(float DeltaTime);
    void OnBeginVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_Fadeout(int32 EntryPoint);
};

#endif
