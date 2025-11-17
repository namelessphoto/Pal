#ifndef UE4SS_SDK_WBP_PalCommonItemIcon_HPP
#define UE4SS_SDK_WBP_PalCommonItemIcon_HPP

class UWBP_PalCommonItemIcon_C : public UWBP_PalItemIconBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCircularThrobber* CircularThrobber_96;
    class UImage* IconImage;
    class UMaterialInstanceDynamic* dynamicMaterial;

    void OnEmpty();
    void OnLoaded(class UTexture2D* loadedTexture);
    void OnStartLoad();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCommonItemIcon(int32 EntryPoint);
};

#endif
