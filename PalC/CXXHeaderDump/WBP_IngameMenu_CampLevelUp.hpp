#ifndef UE4SS_SDK_WBP_IngameMenu_CampLevelUp_HPP
#define UE4SS_SDK_WBP_IngameMenu_CampLevelUp_HPP

class UWBP_IngameMenu_CampLevelUp_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_LevelUp_Close;
    class UWidgetAnimation* Anm_LevelUp;
    class UBP_PalTextBlock_C* Text_LevelNum;

    void Finished_CFA6A904409DD4F86430DFBC13F511B5();
    void ShowLevelUp(int32 Level);
    void ExecuteUbergraph_WBP_IngameMenu_CampLevelUp(int32 EntryPoint);
};

#endif
