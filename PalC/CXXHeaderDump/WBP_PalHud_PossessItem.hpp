#ifndef UE4SS_SDK_WBP_PalHud_PossessItem_HPP
#define UE4SS_SDK_WBP_PalHud_PossessItem_HPP

class UWBP_PalHud_PossessItem_C : public UPalUserWidgetWorldHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_PalPossessItemIcon_C* WBP_PalPossessItemIcon;

    void SetupUI();
    void RemoveSelf_In();
    void OnRequestRemove();
    void OnInitialized();
    void OnSetup();
    void ExecuteUbergraph_WBP_PalHud_PossessItem(int32 EntryPoint);
};

#endif
