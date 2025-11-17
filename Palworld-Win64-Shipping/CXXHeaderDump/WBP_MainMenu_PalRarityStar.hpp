#ifndef UE4SS_SDK_WBP_MainMenu_PalRarityStar_HPP
#define UE4SS_SDK_WBP_MainMenu_PalRarityStar_HPP

class UWBP_MainMenu_PalRarityStar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Highlight;
    class UWidgetAnimation* Anm_OFFToON;
    class UImage* Off;
    class UImage* On;

    void SetActiveRank(bool IsActive);
    void AnmEvent_OnToOff();
    void AnmEvent_OffToOn();
    void AnmEvent_ForceOff();
    void AnmEvent_Highlight();
    void ExecuteUbergraph_WBP_MainMenu_PalRarityStar(int32 EntryPoint);
};

#endif
