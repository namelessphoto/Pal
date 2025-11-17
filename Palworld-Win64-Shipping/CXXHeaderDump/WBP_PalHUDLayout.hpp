#ifndef UE4SS_SDK_WBP_PalHUDLayout_HPP
#define UE4SS_SDK_WBP_PalHUDLayout_HPP

class UWBP_PalHUDLayout_C : public UPalUIHUDLayoutBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* HUDCanvas;
    class UCanvasPanel* WorldHUDCanvas;

    void AddHUD(class UPalUserWidget* Widget, const int32 ZOrder);
    void RemoveHUD(class UPalUserWidget* Widget);
    void AddWorldHUD(class UPalUserWidgetWorldHUD* Widget);
    void RemoveWorldHUD(class UPalUserWidgetWorldHUD* Widget);
    void ExecuteUbergraph_WBP_PalHUDLayout(int32 EntryPoint);
};

#endif
