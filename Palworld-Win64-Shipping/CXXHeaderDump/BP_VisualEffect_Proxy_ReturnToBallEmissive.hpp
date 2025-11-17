#ifndef UE4SS_SDK_BP_VisualEffect_Proxy_ReturnToBallEmissive_HPP
#define UE4SS_SDK_BP_VisualEffect_Proxy_ReturnToBallEmissive_HPP

class UBP_VisualEffect_Proxy_ReturnToBallEmissive_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnBeginVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_Proxy_ReturnToBallEmissive(int32 EntryPoint);
};

#endif
