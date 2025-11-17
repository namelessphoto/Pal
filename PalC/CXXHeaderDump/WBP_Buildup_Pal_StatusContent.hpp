#ifndef UE4SS_SDK_WBP_Buildup_Pal_StatusContent_HPP
#define UE4SS_SDK_WBP_Buildup_Pal_StatusContent_HPP

class UWBP_Buildup_Pal_StatusContent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_RankUp;
    class UCanvasPanel* Canvas_Button_Minus1;
    class UCanvasPanel* Canvas_Button_Plus;
    class UCanvasPanel* CanvasPanel_0;
    class UHorizontalBox* HorizontalBox_Gauge;
    class UImage* IconItem;
    class UImage* IconStatus;
    class UCanvasPanel* itemNum;
    class UImage* StatusArrow;
    class UBP_PalTextBlock_C* Text_BuildupStoneNum;
    class UBP_PalTextBlock_C* Text_StatusNeme;
    class UBP_PalTextBlock_C* Text_StatusNumAfter;
    class UBP_PalTextBlock_C* Text_StatusNumBefore;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Minus;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Plus;
    TArray<class UWBP_Buildup_Gauge_C*> BuildupGauges;
    EPalCharacterStatusOperationName Status;
    bool Clickable;
    FWBP_Buildup_Pal_StatusContent_COnClicked OnClicked;
    void OnClicked(EPalCharacterStatusOperationName Status, int32 TargetRank);
    int32 Current Rank;
    int32 TargetRank;
    bool IsMax;
    int32 Icon Index;
    int32 Item Count;
    class UPalIndividualCharacterParameter* Individual Param;
    FTimerHandle PlusTimer;
    FTimerHandle MinusTimer;

    void SetItemRequireInfo();
    void SetSelectRank(int32 ToRank);
    void SetInfo(class UPalIndividualCharacterParameter* individualParam, int32 SetTargetRank);
    void Get Status(EPalCharacterStatusOperationName& Status);
    void Setup(EPalCharacterStatusOperationName Status);
    void SetEnable(bool IsEnable);
    void AnmEvent_RankUp();
    void RestoreAnmEvent();
    void BndEvt__WBP_Buildup_Pal_StatusContent_WBP_PalInvisibleButton_Plus_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Buildup_Pal_StatusContent_WBP_PalInvisibleButton_Plus_K2Node_ComponentBoundEvent_1_OnButtonReleased__DelegateSignature(class UCommonButtonBase* Button);
    void StatusPlus();
    void StatusMinus();
    void BndEvt__WBP_Buildup_Pal_StatusContent_WBP_PalInvisibleButton_Minus_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Buildup_Pal_StatusContent_WBP_PalInvisibleButton_Minus_K2Node_ComponentBoundEvent_5_OnButtonReleased__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Buildup_Pal_StatusContent(int32 EntryPoint);
    void OnClicked__DelegateSignature(EPalCharacterStatusOperationName Status, int32 TargetRank);
};

#endif
