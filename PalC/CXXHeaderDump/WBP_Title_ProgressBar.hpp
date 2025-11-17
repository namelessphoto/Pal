#ifndef UE4SS_SDK_WBP_Title_ProgressBar_HPP
#define UE4SS_SDK_WBP_Title_ProgressBar_HPP

class UWBP_Title_ProgressBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProgressBar* ProgressBar;
    double CurrentProgressValue;
    double TargetProgressValue;

    void SetProgressBar();
    void SetProgressValue(double NewValue);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_Title_ProgressBar(int32 EntryPoint);
};

#endif
