#ifndef UE4SS_SDK_WBP_PalGenusCategoryIcon_HPP
#define UE4SS_SDK_WBP_PalGenusCategoryIcon_HPP

class UWBP_PalGenusCategoryIcon_C : public UPalUserWidget
{
    class UImage* Image_15;
    TMap<class EPalGenusCategoryType, class TSoftObjectPtr<UTexture2D>> IconMap;

    void Setup(EPalGenusCategoryType Category);
};

#endif
