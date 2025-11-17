#ifndef UE4SS_SDK_WBP_LoadingScreen_Transition_HPP
#define UE4SS_SDK_WBP_LoadingScreen_Transition_HPP

class UWBP_LoadingScreen_Transition_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* FadeOut;
    class UWidgetAnimation* Default_In;
    class UCanvasPanel* CanvasPanel_0;
    class UWBP_LoadingScreen_C* WBP_LoadingScreen;

    void SetBgColor(FLinearColor Color);
    void Finished_65AD92BC4646C00F05936392250F90EA();
    void Finished_D300E47D4C210C5B9AC12E8500F6AC11();
    void Construct();
    void StartFadeOut();
    void StartFadeIn();
    void ToggleVisibility(bool Visiable);
    void ExecuteUbergraph_WBP_LoadingScreen_Transition(int32 EntryPoint);
};

#endif
