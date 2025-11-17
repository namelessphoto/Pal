#ifndef UE4SS_SDK_WBP_IngameCompass_arrow_HPP
#define UE4SS_SDK_WBP_IngameCompass_arrow_HPP

class UWBP_IngameCompass_arrow_C : public UWBP_CompassIconBase_C
{
    class UBorder* Border;
    class UImage* Image_Icon;
    class UBP_PalTextBlock_C* Text_Length;

    void ChangeBorderDrawType(TEnumAsByte<ESlateBrushDrawType> drawType);
    void ChangeBorderColor(FLinearColor Color);
    void SetupTexture(TSoftObjectPtr<UTexture2D> SoftTexture);
    void SetDistanceText(double Length);
};

#endif
