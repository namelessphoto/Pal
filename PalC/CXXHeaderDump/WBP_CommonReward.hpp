#ifndef UE4SS_SDK_WBP_CommonReward_HPP
#define UE4SS_SDK_WBP_CommonReward_HPP

class UWBP_CommonReward_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_MonoColor;
    class UWidgetAnimation* Anm_PurpleColor;
    class UWidgetAnimation* Anm_DefaultColor;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UImage* Icon;
    class UImage* Image_Strong;
    class UBP_PalTextBlock_C* Text_RewardInfo;
    class UBP_PalTextBlock_C* Text_Title;
    TArray<FPalUICommonRewardDisplayData> RewardInfos;
    bool Queuing;
    TMap<class EPalUIRewardDisplayType, class FDataTableRowHandle> TitleMap;

    void Finished_8B86E03B4C9B039B2D1E43872343E0D8();
    void Finished_99C931904947D8826978CE8B6DE53642();
    void ShowInfo();
    void QueueRewardInfo(FPalUICommonRewardDisplayData Info);
    void SetInfo(FPalUICommonRewardDisplayData Info);
    void ChangeColor(EPalUIRewardDisplayType DisplayType);
    void ClearQueueInfo();
    void ExecuteUbergraph_WBP_CommonReward(int32 EntryPoint);
};

#endif
