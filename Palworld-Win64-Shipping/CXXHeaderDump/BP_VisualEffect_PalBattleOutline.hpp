#ifndef UE4SS_SDK_BP_VisualEffect_PalBattleOutline_HPP
#define UE4SS_SDK_BP_VisualEffect_PalBattleOutline_HPP

class UBP_VisualEffect_PalBattleOutline_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double Alpha;
    double Fade Speed;
    class UMaterialInstanceDynamic* Material;
    bool IsFadeInComplete;

    void SetFadeAlpha(double Alpha);
    void OnBeginVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void OnEndVisualEffect();
    void TerminatingTickVisualEffect(float DeltaTime);
    void OnBreakVisualEffect(bool bByConflict);
    void ExecuteUbergraph_BP_VisualEffect_PalBattleOutline(int32 EntryPoint);
};

#endif
