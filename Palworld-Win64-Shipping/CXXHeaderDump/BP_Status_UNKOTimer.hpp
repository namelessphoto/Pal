#ifndef UE4SS_SDK_BP_Status_UNKOTimer_HPP
#define UE4SS_SDK_BP_Status_UNKOTimer_HPP

class UBP_Status_UNKOTimer_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle Timer;
    int32 OneDay_Second;

    void OnBeginStatus();
    void OnEndStatus();
    void カスタムイベント_0();
    void ExecuteUbergraph_BP_Status_UNKOTimer(int32 EntryPoint);
};

#endif
