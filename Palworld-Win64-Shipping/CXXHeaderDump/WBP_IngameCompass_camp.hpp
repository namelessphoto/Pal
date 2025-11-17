#ifndef UE4SS_SDK_WBP_IngameCompass_camp_HPP
#define UE4SS_SDK_WBP_IngameCompass_camp_HPP

class UWBP_IngameCompass_camp_C : public UWBP_CompassIconBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_Innner;
    class UImage* Image_Icon;
    class UBP_PalTextBlock_C* Text_Length;

    void SetupTexture(TSoftObjectPtr<UTexture2D> SoftTexture);
    void SetDistanceText(double Length);
    void Destruct();
    void ExecuteUbergraph_WBP_IngameCompass_camp(int32 EntryPoint);
};

#endif
