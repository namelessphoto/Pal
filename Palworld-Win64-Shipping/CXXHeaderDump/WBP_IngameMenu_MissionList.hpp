#ifndef UE4SS_SDK_WBP_IngameMenu_MissionList_HPP
#define UE4SS_SDK_WBP_IngameMenu_MissionList_HPP

class UWBP_IngameMenu_MissionList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Check_OffToOn;
    class UImage* Check;
    class UBP_PalTextBlock_C* Text_Camp_Max;
    class UBP_PalTextBlock_C* Text_Mission;
    class UBP_PalTextBlock_C* Text_MissionNum;
    bool IsChecked;

    void SetMissionInfo(FText Text, int32 NowProgress, int32 MaxProgress);
    void ToggleCheckMark(bool Enable);
    void SetDisplayMax(bool Enable);
    void Construct();
    void ExecuteUbergraph_WBP_IngameMenu_MissionList(int32 EntryPoint);
};

#endif
