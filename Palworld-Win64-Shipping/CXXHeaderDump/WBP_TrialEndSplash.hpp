#ifndef UE4SS_SDK_WBP_TrialEndSplash_HPP
#define UE4SS_SDK_WBP_TrialEndSplash_HPP

class UWBP_TrialEndSplash_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Out;
    class UWidgetAnimation* In;
    class UImage* Image_Black;
    class UWBP_Trial_TYFP_C* WBP_Trial_TYFP;

    void Finished_21855C7B4EA397CD2F6CDD896BC6E582();
    void Construct();
    void EndGame_Timer();
    void ExecuteUbergraph_WBP_TrialEndSplash(int32 EntryPoint);
};

#endif
