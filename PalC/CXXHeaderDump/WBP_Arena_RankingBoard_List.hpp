#ifndef UE4SS_SDK_WBP_Arena_RankingBoard_List_HPP
#define UE4SS_SDK_WBP_Arena_RankingBoard_List_HPP

class UWBP_Arena_RankingBoard_List_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_Base_Myself;
    class UImage* Image_Icon_NPC;
    class UImage* Image_RankIcon;
    class UBP_PalTextBlock_C* Text_GuildName;
    class UBP_PalTextBlock_C* Text_PlayerName;
    class UBP_PalTextBlock_C* Text_RankNum;
    class UBP_PalTextBlock_C* Text_RankPointNum;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_Arena_RankingBoard_List_COnListHovered OnListHovered;
    void OnListHovered(class UWidget* Widget);

    void Setup(FPalArenaWorldRankingRecord RankingInfo);
    void BndEvt__WBP_Arena_RankingBoard_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Arena_RankingBoard_List(int32 EntryPoint);
    void OnListHovered__DelegateSignature(class UWidget* Widget);
};

#endif
