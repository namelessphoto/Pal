#ifndef UE4SS_SDK_BP_VisualEffect_SpawnFadeIn_HPP
#define UE4SS_SDK_BP_VisualEffect_SpawnFadeIn_HPP

class UBP_VisualEffect_SpawnFadeIn_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double Opacity;
    float TickInterval;
    FTimerHandle TimerHandle;
    double FadeTime;

    void SetOpacity(double Intensity);
    void OnEndVisualEffect();
    void OnBeginVisualEffect();
    void Update();
    void ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn(int32 EntryPoint);
};

#endif
