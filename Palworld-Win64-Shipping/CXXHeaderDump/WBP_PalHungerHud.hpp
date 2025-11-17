#ifndef UE4SS_SDK_WBP_PalHungerHud_HPP
#define UE4SS_SDK_WBP_PalHungerHud_HPP

class UWBP_PalHungerHud_C : public UPalUserWidgetWorldHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_PalHungerIcon_C* WBP_PalHungerIcon;
    FGuid Belong Group Id;
    FTimerHandle CheckGroupTimer;

    void GetLocalPlayerGroupID(FGuid& GroupId);
    void RemoveSelf_In();
    void OnRequestRemove();
    void OnInitialized();
    void OnSetup();
    void CheckGroup();
    void Destruct();
    void ExecuteUbergraph_WBP_PalHungerHud(int32 EntryPoint);
};

#endif
