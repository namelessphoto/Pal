#ifndef UE4SS_SDK_WBP_PalInGameMenuItemIcon_HPP
#define UE4SS_SDK_WBP_PalInGameMenuItemIcon_HPP

class UWBP_PalInGameMenuItemIcon_C : public UWBP_PalItemIconBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCircularThrobber* CircularThrobber_363;
    class UImage* Image_Main;
    class UImage* Image_Main_BP;
    bool EmptySet;

    void OnInitialized();
    void StartLoadEvent();
    void LoadedTextureEvent(class UTexture2D* loadedTexture);
    void EmptyEvent();
    void SetBPIcon(TSoftObjectPtr<UTexture2D> Icon);
    void HideBPIcon();
    void ExecuteUbergraph_WBP_PalInGameMenuItemIcon(int32 EntryPoint);
};

#endif
