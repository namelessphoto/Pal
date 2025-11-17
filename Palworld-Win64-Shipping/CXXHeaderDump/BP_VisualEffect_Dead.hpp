#ifndef UE4SS_SDK_BP_VisualEffect_Dead_HPP
#define UE4SS_SDK_BP_VisualEffect_Dead_HPP

class UBP_VisualEffect_Dead_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnBeginVisualEffect();
    void OnEndVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_Dead(int32 EntryPoint);
};

#endif
