#ifndef UE4SS_SDK_BP_VisualEffect_CaptureEmissive_HPP
#define UE4SS_SDK_BP_VisualEffect_CaptureEmissive_HPP

class UBP_VisualEffect_CaptureEmissive_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double EmissionTime;
    double EmissionTimer;
    double CurrentEmission;
    double EmissionMax;

    void OnBeginVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void OnEndVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_CaptureEmissive(int32 EntryPoint);
};

#endif
