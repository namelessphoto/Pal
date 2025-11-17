#ifndef UE4SS_SDK_BP_VisualEffect_PalOutlineFadeIn_HPP
#define UE4SS_SDK_BP_VisualEffect_PalOutlineFadeIn_HPP

class UBP_VisualEffect_PalOutlineFadeIn_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double Alpha;
    double Fade Speed;
    class UMaterialInstanceDynamic* Material;

    void OnBeginVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeIn(int32 EntryPoint);
};

#endif
