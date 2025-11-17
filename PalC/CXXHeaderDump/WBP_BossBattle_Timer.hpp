#ifndef UE4SS_SDK_WBP_BossBattle_Timer_HPP
#define UE4SS_SDK_WBP_BossBattle_Timer_HPP

class UWBP_BossBattle_Timer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* BP_PalTextBlock_CountDown;

    void SetRemainSecond(int32 RemainSecond);
    void SetText(FText Text);
    void ExecuteUbergraph_WBP_BossBattle_Timer(int32 EntryPoint);
};

#endif
