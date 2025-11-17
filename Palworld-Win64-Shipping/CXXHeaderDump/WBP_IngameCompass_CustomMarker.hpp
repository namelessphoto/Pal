#ifndef UE4SS_SDK_WBP_IngameCompass_CustomMarker_HPP
#define UE4SS_SDK_WBP_IngameCompass_CustomMarker_HPP

class UWBP_IngameCompass_CustomMarker_C : public UWBP_CompassIconBase_C
{
    class UImage* Image_Icon;
    class UBP_PalTextBlock_C* Text_Length;
    TArray<class UTexture2D*> Textures;

    void UpdateDistance();
    void UpdateVisibility(bool& InDistance);
    void SetCustomMarkerTexture(int32 IconType);
    void SetDistanceText(double Length);
};

#endif
