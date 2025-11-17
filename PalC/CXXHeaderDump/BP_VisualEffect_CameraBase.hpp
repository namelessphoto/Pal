#ifndef UE4SS_SDK_BP_VisualEffect_CameraBase_HPP
#define UE4SS_SDK_BP_VisualEffect_CameraBase_HPP

class UBP_VisualEffect_CameraBase_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double FadeInTime;
    double FadeOutTime;
    double TimeEventTime;
    double Weight;
    FTimerHandle FadeInTimerHanhdle;
    FTimerHandle FadeOutTimerHanhdle;

    void UpdateEffectValue(double WeightValue);
    void OnBeginVisualEffect();
    void OnEndVisualEffect();
    void カスタムイベント_FadeIIn();
    void カスタムイベント_FadeOut();
    void ExecuteUbergraph_BP_VisualEffect_CameraBase(int32 EntryPoint);
};

#endif
