#ifndef UE4SS_SDK_WBP_BossBattle_TimeOut_HPP
#define UE4SS_SDK_WBP_BossBattle_TimeOut_HPP

class UWBP_BossBattle_TimeOut_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_OpenClose;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_48;

    void ChangeText(bool IsTimeOut);
    void ExecuteUbergraph_WBP_BossBattle_TimeOut(int32 EntryPoint);
};

#endif
