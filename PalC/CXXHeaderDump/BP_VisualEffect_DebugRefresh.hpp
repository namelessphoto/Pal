#ifndef UE4SS_SDK_BP_VisualEffect_DebugRefresh_HPP
#define UE4SS_SDK_BP_VisualEffect_DebugRefresh_HPP

class UBP_VisualEffect_DebugRefresh_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnBeginVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_DebugRefresh(int32 EntryPoint);
};

#endif
