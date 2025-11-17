#ifndef UE4SS_SDK_WBP_IngameMenu_Monitoring_WorkInfo_HPP
#define UE4SS_SDK_WBP_IngameMenu_Monitoring_WorkInfo_HPP

class UWBP_IngameMenu_Monitoring_WorkInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_TextColor;
    class UBP_PalTextBlock_C* Text_Category;
    class UBP_PalTextBlock_C* Text_Category_1;
    int32 EffectID;
    TArray<FDataTableRowHandle> EffectMsgIDs;
    TArray<FDataTableRowHandle> EffectLevelMsgIDs;

    void Construct();
    void ChangeLevelText(int32 NewLevel);
    void ExecuteUbergraph_WBP_IngameMenu_Monitoring_WorkInfo(int32 EntryPoint);
};

#endif
