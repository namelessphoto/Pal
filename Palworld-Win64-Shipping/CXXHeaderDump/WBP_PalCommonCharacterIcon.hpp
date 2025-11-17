#ifndef UE4SS_SDK_WBP_PalCommonCharacterIcon_HPP
#define UE4SS_SDK_WBP_PalCommonCharacterIcon_HPP

class UWBP_PalCommonCharacterIcon_C : public UWBP_PalCharacterIconBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCircularThrobber* CircularThrobber_96;
    class UImage* IconImage;
    class UMaterialInstanceDynamic* dynamicMaterial;
    bool IsEmpty;
    double SphereMaskRadius;

    void SetFraction(double Fraction);
    void OnEmpty();
    void OnLoaded(class UTexture2D* loadedTexture);
    void OnStartLoad();
    void Construct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCommonCharacterIcon(int32 EntryPoint);
};

#endif
