#ifndef UE4SS_SDK_WBP_InLevelLoadingFade_HPP
#define UE4SS_SDK_WBP_InLevelLoadingFade_HPP

class UWBP_InLevelLoadingFade_C : public UWBP_PalFadeWidgetBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Fade;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Crossplay;
    class UWBP_LoadingScreen_C* WBP_LoadingScreen;
    class UWBP_Title_ProgressBar_C* WBP_Title_ProgressBar;
    int32 Step;
    bool ProgressDisplay;

    void FadeIn();
    void FadeOut();
    void Setup_ForOverride();
    void Finished_50648C2D41952F044CFD8F9629D4027A();
    void Finished_BCA2D9DB46EBD8925174F885E2A96DAA();
    void AnmEvent_FadeOut();
    void AnmEvent_FadeIn();
    void Construct();
    void Destruct();
    void Setup(class UPalHUDDispatchParameter_FadeWidget* FadeParameter);
    void UpdateProgressStep(int32 AddStep, int32 MaxStep);
    void ExecuteUbergraph_WBP_InLevelLoadingFade(int32 EntryPoint);
};

#endif
