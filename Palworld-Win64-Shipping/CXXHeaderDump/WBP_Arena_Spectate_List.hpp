#ifndef UE4SS_SDK_WBP_Arena_Spectate_List_HPP
#define UE4SS_SDK_WBP_Arena_Spectate_List_HPP

class UWBP_Arena_Spectate_List_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anim_NormalToFocus;
    class UImage* Image_RankIcon_P1;
    class UImage* Image_RankIcon_P2;
    class UOverlay* Overlay_Match;
    class UOverlay* Overlay_Prepare;
    class UBP_PalTextBlock_C* Text_Condition_TimeNum;
    class UBP_PalTextBlock_C* Text_GuildName_P1;
    class UBP_PalTextBlock_C* Text_GuildName_P2;
    class UBP_PalTextBlock_C* Text_PlayerName_P1;
    class UBP_PalTextBlock_C* Text_PlayerName_P2;
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon;
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_1;
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_2;
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_3;
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_4;
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_10;
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_11;
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_12;
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_13;
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_14;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    TArray<class UWBP_Arena_PalIcon_C*> Player1Otomos;
    TArray<class UWBP_Arena_PalIcon_C*> Player2Otomos;
    FWBP_Arena_Spectate_List_COnSpecClicked OnSpecClicked;
    void OnSpecClicked(class UWBP_Arena_Spectate_List_C* ListUI);
    FWBP_Arena_Spectate_List_COnSpecHovered OnSpecHovered;
    void OnSpecHovered(class UWBP_Arena_Spectate_List_C* ListUI);
    FWBP_Arena_Spectate_List_COnSpecUnhovered OnSpecUnhovered;
    void OnSpecUnhovered(class UWBP_Arena_Spectate_List_C* ListUI);
    FGameDateTime Start Time;
    FTimerHandle TimeUpdateTimer;
    int32 Time Limit;

    void UpdateTimer();
    void Setup(FPalArenaSpectateRoomInfo RoomInfo);
    void AnmEvent_Focus();
    void AnmEvent_Normal();
    void OnInitialized();
    void BndEvt__WBP_Arena_Spectate_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_Spectate_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_Spectate_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_Arena_Spectate_List(int32 EntryPoint);
    void OnSpecUnhovered__DelegateSignature(class UWBP_Arena_Spectate_List_C* ListUI);
    void OnSpecHovered__DelegateSignature(class UWBP_Arena_Spectate_List_C* ListUI);
    void OnSpecClicked__DelegateSignature(class UWBP_Arena_Spectate_List_C* ListUI);
};

#endif
