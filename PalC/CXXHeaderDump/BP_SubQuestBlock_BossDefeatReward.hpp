#ifndef UE4SS_SDK_BP_SubQuestBlock_BossDefeatReward_HPP
#define UE4SS_SDK_BP_SubQuestBlock_BossDefeatReward_HPP

class UBP_SubQuestBlock_BossDefeatReward_C : public UPalQuestBlock
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    FTimerHandle NewVar;                                                              // 0x00C8 (size: 0x8)
    int32 OldDefeatCount;                                                             // 0x00D0 (size: 0x4)
    FName OldRequestid;                                                               // 0x00D4 (size: 0x8)

    void GetRecordData(class UPalPlayerRecordData*& RecordData);
    void GetProgressText(FText& OutText);
    void GetDescriptionText(FText& OutText);
    void GetCurrentObjecttiveData(FPalRecordCountRewardData& RewardData);
    void IsCompleted(bool& bCompleted);
    void カスタムイベント();
    void OnSetup_ServerInternal_ForBP();
    void OnComplete_ServerInternal_ForBP();
    void ExecuteUbergraph_BP_SubQuestBlock_BossDefeatReward(int32 EntryPoint);
}; // Size: 0xDC

#endif
