#ifndef UE4SS_SDK_BP_SubQuestBlock_BossDefeatReward_HPP
#define UE4SS_SDK_BP_SubQuestBlock_BossDefeatReward_HPP

class UBP_SubQuestBlock_BossDefeatReward_C : public UPalQuestBlock
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle NewVar;
    int32 OldDefeatCount;
    FName OldRequestid;

    void GetRecordData(class UPalPlayerRecordData*& RecordData);
    void GetProgressText(FText& OutText);
    void GetDescriptionText(FText& OutText);
    void GetCurrentObjecttiveData(FPalRecordCountRewardData& RewardData);
    void IsCompleted(bool& bCompleted);
    void カスタムイベント();
    void OnSetup_ServerInternal_ForBP();
    void OnComplete_ServerInternal_ForBP();
    void ExecuteUbergraph_BP_SubQuestBlock_BossDefeatReward(int32 EntryPoint);
};

#endif
