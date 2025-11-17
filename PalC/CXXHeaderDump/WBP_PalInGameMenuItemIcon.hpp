#ifndef UE4SS_SDK_WBP_PalInGameMenuItemIcon_HPP
#define UE4SS_SDK_WBP_PalInGameMenuItemIcon_HPP

class UWBP_PalInGameMenuItemIcon_C : public UWBP_PalItemIconBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0468 (size: 0x8)
    class UCircularThrobber* CircularThrobber_363;                                    // 0x0470 (size: 0x8)
    class UImage* Image_Main;                                                         // 0x0478 (size: 0x8)
    class UImage* Image_Main_BP;                                                      // 0x0480 (size: 0x8)
    bool EmptySet;                                                                    // 0x0488 (size: 0x1)

    void OnInitialized();
    void StartLoadEvent();
    void LoadedTextureEvent(class UTexture2D* loadedTexture);
    void EmptyEvent();
    void SetBPIcon(TSoftObjectPtr<UTexture2D> Icon);
    void HideBPIcon();
    void ExecuteUbergraph_WBP_PalInGameMenuItemIcon(int32 EntryPoint);
}; // Size: 0x489

#endif
