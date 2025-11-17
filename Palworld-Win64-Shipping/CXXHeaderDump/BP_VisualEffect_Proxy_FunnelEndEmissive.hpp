#ifndef UE4SS_SDK_BP_VisualEffect_Proxy_FunnelEndEmissive_HPP
#define UE4SS_SDK_BP_VisualEffect_Proxy_FunnelEndEmissive_HPP

class UBP_VisualEffect_Proxy_FunnelEndEmissive_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnBeginVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive(int32 EntryPoint);
};

#endif
