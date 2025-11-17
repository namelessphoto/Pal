#ifndef UE4SS_SDK_WBP_GameOver_Rescue_HPP
#define UE4SS_SDK_WBP_GameOver_Rescue_HPP

class UWBP_GameOver_Rescue_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProgressBar* ProgressBar_Rescue;

    void UpdateRescue(double Remain);
    void ExecuteUbergraph_WBP_GameOver_Rescue(int32 EntryPoint);
};

#endif
