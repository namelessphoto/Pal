#ifndef UE4SS_SDK_WBP_IngameCompass_dungeonGoal_HPP
#define UE4SS_SDK_WBP_IngameCompass_dungeonGoal_HPP

class UWBP_IngameCompass_dungeonGoal_C : public UWBP_CompassIconBase_C
{
    class UImage* Image_Icon;
    class UBP_PalTextBlock_C* Text_Length;

    void SetupTexture(TSoftObjectPtr<UTexture2D> SoftTexture);
    void SetDistanceText(double Length);
};

#endif
