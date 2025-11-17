#ifndef UE4SS_SDK_WBP_Arena_SoloEntry_HPP
#define UE4SS_SDK_WBP_Arena_SoloEntry_HPP

class UWBP_Arena_SoloEntry_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_In;
    class UWBP_Arena_SoloEntryButton_C* WBP_Arena_SoloEntryButton;
    class UWBP_Arena_SoloEntryButton_C* WBP_Arena_SoloEntryButton_1;
    class UWBP_Arena_SoloEntryButton_C* WBP_Arena_SoloEntryButton_2;
    class UWBP_Arena_SoloEntryButton_C* WBP_Arena_SoloEntryButton_3;
    class UWBP_Arena_SoloEntryButton_C* WBP_Arena_SoloEntryButton_4;
    class UWBP_Arena_SoloEntryButton_C* WBP_Arena_SoloEntryButton_5;
    TArray<class UWBP_Arena_SoloEntryButton_C*> EntryButtons;
    EPalArenaRank CurrentSelectRank;
    class UWBP_Arena_SoloEntryButton_C* LastHoveredEntry;

    void OnEntryHovered(class UWBP_Arena_SoloEntryButton_C* Button);
    void OnEntryUnhovered(class UWBP_Arena_SoloEntryButton_C* Button);
    void Setup();
    class UWidget* BP_GetDesiredFocusTarget();
    void Finished_6E03AF144B8AC540362D31A1A74FC2B5();
    void Finished_A8F632BC4656B439BE29FC9AA565281B();
    void OnInitialized();
    void Construct();
    void OnSetup();
    void OnSelectSoloEntry(EPalArenaRank ArenaRank);
    void CancelAction();
    void OnConfirmSolo(bool IsYes);
    void ExecuteUbergraph_WBP_Arena_SoloEntry(int32 EntryPoint);
};

#endif
