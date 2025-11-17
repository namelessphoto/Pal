#ifndef UE4SS_SDK_WBP_IconPalWork_HPP
#define UE4SS_SDK_WBP_IconPalWork_HPP

class UWBP_IconPalWork_C : public UUserWidget
{
    class UImage* Icon;
    TMap<class EPalWorkSuitability, class UTexture2D*> IconMap;
    TMap<class EPalMapObjectMaterialSubType, class TSoftObjectPtr<UTexture2D>> IconMap_MaterialSubType;

    void SetSuitability(EPalWorkSuitability Suitability);
};

#endif
