#ifndef UE4SS_SDK_WBP_Map_IconDungeon_HPP
#define UE4SS_SDK_WBP_Map_IconDungeon_HPP

class UWBP_Map_IconDungeon_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    class UImage* Icon;
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;
    FGuid BaseCampId;

    void GetInvisibleButton(class UWidget*& Button);
};

#endif
