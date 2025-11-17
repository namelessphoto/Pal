#ifndef UE4SS_SDK_WBP_Arena_SoloEntryButton_HPP
#define UE4SS_SDK_WBP_Arena_SoloEntryButton_HPP

class UWBP_Arena_SoloEntryButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Reward;
    class UCanvasPanel* Canvas_Lock;
    class UCanvasPanel* Canvas_Reward;
    class UImage* Image_RankIcon;
    class UBP_PalTextBlock_C* Text_Rank;
    class UBP_PalTextBlock_C* Text_RankLevelText;
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton;
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_1;
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_2;
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_3;
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_4;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    EPalArenaRank ArenaRank;
    FWBP_Arena_SoloEntryButton_COnArenaSoloButtonClicked OnArenaSoloButtonClicked;
    void OnArenaSoloButtonClicked(EPalArenaRank ArenaRank);
    TArray<class UWBP_PalInGameMenuItemSlotButton_C*> RewardItemSlots;
    FWBP_Arena_SoloEntryButton_COnArenaSoloButtonHovered OnArenaSoloButtonHovered;
    void OnArenaSoloButtonHovered(class UWBP_Arena_SoloEntryButton_C* Button);
    FWBP_Arena_SoloEntryButton_COnArenaSoloButtonUnhovered OnArenaSoloButtonUnhovered;
    void OnArenaSoloButtonUnhovered(class UWBP_Arena_SoloEntryButton_C* Button);
    bool CurrentLock;

    void SetLock(bool IsLock);
    void Setup(EPalArenaRank Rank);
    void AnmEvent_Focus();
    void AnmEvent_Normal();
    void BndEvt__WBP_Arena_SoloEntryButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_SoloEntryButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Construct();
    void BndEvt__WBP_Arena_SoloEntryButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void ToggleFocusDisplay(bool IsFocus);
    void ExecuteUbergraph_WBP_Arena_SoloEntryButton(int32 EntryPoint);
    void OnArenaSoloButtonUnhovered__DelegateSignature(class UWBP_Arena_SoloEntryButton_C* Button);
    void OnArenaSoloButtonHovered__DelegateSignature(class UWBP_Arena_SoloEntryButton_C* Button);
    void OnArenaSoloButtonClicked__DelegateSignature(EPalArenaRank ArenaRank);
};

#endif
