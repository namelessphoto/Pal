#ifndef UE4SS_SDK_BP_VisualEffect_PalOutlineFadeOut_HPP
#define UE4SS_SDK_BP_VisualEffect_PalOutlineFadeOut_HPP

class UBP_VisualEffect_PalOutlineFadeOut_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double Alpha;
    double Fade Speed;
    class UMaterialInstanceDynamic* Material;

    void OnBeginVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void OnEndVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut(int32 EntryPoint);
};

#endif
