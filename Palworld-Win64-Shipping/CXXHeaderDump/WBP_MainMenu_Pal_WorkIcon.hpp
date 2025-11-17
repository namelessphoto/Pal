#ifndef UE4SS_SDK_WBP_MainMenu_Pal_WorkIcon_HPP
#define UE4SS_SDK_WBP_MainMenu_Pal_WorkIcon_HPP

class UWBP_MainMenu_Pal_WorkIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalRetainerBox* PalRetainerBox_Eff;
    class UBP_PalTextBlock_C* Text_LevelNum;
    class UImage* UpArrow;
    class UWBP_IconPalWork_C* WBP_IconPalWork;

    void SetRankup(bool Enable);
    void SetRank(int32 Rank);
    void SetSuitability(EPalWorkSuitability WorkSuitability);
    void IconOn();
    void IconOff();
    void ExecuteUbergraph_WBP_MainMenu_Pal_WorkIcon(int32 EntryPoint);
};

#endif
