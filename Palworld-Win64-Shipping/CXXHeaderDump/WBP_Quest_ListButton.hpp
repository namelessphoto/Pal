#ifndef UE4SS_SDK_WBP_Quest_ListButton_HPP
#define UE4SS_SDK_WBP_Quest_ListButton_HPP

class UWBP_Quest_ListButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Completed;
    class UWidgetAnimation* Anm_Default;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UCanvasPanel* Canvas_Tracking;
    class UImage* Image;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* Image_3;
    class UImage* Image_4;
    class UImage* Image_5;
    class UImage* Image_125;
    class UImage* Image_Base_Focus;
    class UImage* Image_CompleteCheck;
    class UImage* Image_Frame;
    class UImage* Image_Icon_GuildQuest;
    class UBP_PalRichTextBlock_C* RichText_QuestTitle;
    class UBP_PalTextBlock_C* Text_Distance;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    TSoftObjectPtr<UPalQuestData> SoftQuestData;
    FWBP_Quest_ListButton_COnClicked OnClicked;
    void OnClicked(class UWBP_Quest_ListButton_C* Widget);
    FWBP_Quest_ListButton_COnHovered OnHovered;
    void OnHovered(class UWBP_Quest_ListButton_C* Widget);
    FWBP_Quest_ListButton_COnUnhovered OnUnhovered;
    void OnUnhovered(class UWBP_Quest_ListButton_C* Widget);

    void SetVisibility_TrackingDetail(ESlateVisibility InVisibility);
    void GetQuestData(class UPalQuestData*& QuestData);
    void Setup(class UPalQuestData* QuestData);
    void AnmEvent_Hover();
    void AnmEvent_Unhover();
    void AnmEvent_Completed();
    void AnmEvent_Ordered();
    void Destruct();
    void BndEvt__WBP_Quest_ListButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Quest_ListButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Quest_ListButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Quest_ListButton(int32 EntryPoint);
    void OnUnhovered__DelegateSignature(class UWBP_Quest_ListButton_C* Widget);
    void OnHovered__DelegateSignature(class UWBP_Quest_ListButton_C* Widget);
    void OnClicked__DelegateSignature(class UWBP_Quest_ListButton_C* Widget);
};

#endif
