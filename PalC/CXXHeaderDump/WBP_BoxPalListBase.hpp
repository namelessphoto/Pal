#ifndef UE4SS_SDK_WBP_BoxPalListBase_HPP
#define UE4SS_SDK_WBP_BoxPalListBase_HPP

class UWBP_BoxPalListBase_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UCanvasPanel* Canvas_SliderValue;                                           // 0x0410 (size: 0x8)
    class UImage* Image_23;                                                           // 0x0418 (size: 0x8)
    class USlider* Slider;                                                            // 0x0420 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BoxName;                                           // 0x0428 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SliderValue;                                       // 0x0430 (size: 0x8)
    class UWBP_PalCharacterScrollList_C* WBP_BoxPalScrollList;                        // 0x0438 (size: 0x8)
    class UWBP_Common_NumArrow_C* WBP_Common_NumArrow_L;                              // 0x0440 (size: 0x8)
    class UWBP_Common_NumArrow_C* WBP_Common_NumArrow_R;                              // 0x0448 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_Sort;                               // 0x0450 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_NextPage;                       // 0x0458 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_PrevPage;                       // 0x0460 (size: 0x8)
    FWBP_BoxPalListBase_COnLeftClickedSlot OnLeftClickedSlot;                         // 0x0468 (size: 0x10)
    void OnLeftClickedSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    FWBP_BoxPalListBase_COnRightClickedSlot OnRightClickedSlot;                       // 0x0478 (size: 0x10)
    void OnRightClickedSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_BoxPalListBase_COnHoveredSlot OnHoveredSlot;                                 // 0x0488 (size: 0x10)
    void OnHoveredSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_BoxPalListBase_COnUnhoveredSlot OnUnhoveredSlot;                             // 0x0498 (size: 0x10)
    void OnUnhoveredSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_BoxPalListBase_COnUpdatedPage OnUpdatedPage;                                 // 0x04A8 (size: 0x10)
    void OnUpdatedPage(int32 NowPage);
    FWBP_BoxPalListBase_COnCreatedNewSlot OnCreatedNewSlot;                           // 0x04B8 (size: 0x10)
    void OnCreatedNewSlot(class UWBP_PalCharacterSlotButtonBase_C* NewSlot);
    FWBP_BoxPalListBase_COnSelectPalBoxPage OnSelectPalBoxPage;                       // 0x04C8 (size: 0x10)
    void OnSelectPalBoxPage(int32 Page);
    int32 LastSelectedPageNum;                                                        // 0x04D8 (size: 0x4)
    int32 MaxPageNum;                                                                 // 0x04DC (size: 0x4)
    FDataTableRowHandle PageNameMsgID;                                                // 0x04E0 (size: 0x10)
    TMap<class UPalIndividualCharacterSlot*, class UWBP_PalCommonCharacterSlotButton_C*> CurrentPalBoxSlotMap; // 0x04F0 (size: 0x50)
    FWBP_BoxPalListBase_COnNextPageInput OnNextPageInput;                             // 0x0540 (size: 0x10)
    void OnNextPageInput();
    FWBP_BoxPalListBase_COnPrevPageInput OnPrevPageInput;                             // 0x0550 (size: 0x10)
    void OnPrevPageInput();
    FTimerHandle ToNextPageTimer;                                                     // 0x0560 (size: 0x8)
    FTimerHandle ToPrevPageTimer;                                                     // 0x0568 (size: 0x8)
    FWBP_BoxPalListBase_COnClickedSortButton OnClickedSortButton;                     // 0x0570 (size: 0x10)
    void OnClickedSortButton();
    FPalUIActionBindData NextPagePressedActionHandle;                                 // 0x0580 (size: 0x4)
    FPalUIActionBindData NextPageReleasedActionHandle;                                // 0x0584 (size: 0x4)
    FPalUIActionBindData PrevPagePressedActionHandle;                                 // 0x0588 (size: 0x4)
    FPalUIActionBindData PrevPageReleasedActionHandle;                                // 0x058C (size: 0x4)
    bool bIsValidPageAction;                                                          // 0x0590 (size: 0x1)
    int32 PageMoveCount_Timer;                                                        // 0x0594 (size: 0x4)
    int32 SkipPageNum;                                                                // 0x0598 (size: 0x4)
    int32 SkipPageStartCount;                                                         // 0x059C (size: 0x4)
    bool bSkipPage;                                                                   // 0x05A0 (size: 0x1)
    FWBP_BoxPalListBase_COnUpdateSlot OnUpdateSlot;                                   // 0x05A8 (size: 0x10)
    void OnUpdateSlot(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);

    void GetPageIndexFromSlider(int32& pageIndex);
    void ToPrevPage_Timer();
    void ToNextPage_Timer();
    void ToPrevPage();
    void ToNextPage();
    void IsValidChangePageInputAction(bool& bValidAction);
    void GetTopFocusTarget(class UWidget*& Widget);
    void GetCurrentPage(int32& CurrentPageNum);
    void RemovePageControlAction();
    void GetCurrentDisplaySlotWidgets(TArray<class UWBP_PalCommonCharacterSlotButton_C*>& SlotWidgets);
    void FindWidgetBySlot(class UPalIndividualCharacterSlot* Slot, class UWBP_PalCharacterSlotButtonBase_C*& FindWidget);
    void OnReleasedPrevPageInputInternal();
    void OnPressedPrevPageInputInternal();
    void OnReleasedNextPageInputInternal();
    void OnPressedNextPageInputInternal();
    void SetPageControlAction(FPalDataTableRowName_UIInputAction NextPageAction, FPalDataTableRowName_UIInputAction PrevPageAction);
    void SetCharacterSlots(TArray<class UPalIndividualCharacterSlot*>& DisplaySlots);
    void SetCurrentPage(int32 CurrentPage);
    void ClearPageSettings();
    void SetMaxPageNum(int32 MaxPage);
    void Destruct();
    void BndEvt__WBP_BoxPalListBase_Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__WBP_BoxPalListBase_WBP_CommonButton_Sort_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_BoxPalListBase_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_BoxPalListBase_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_3_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_BoxPalListBase_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_4_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_BoxPalListBase_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_BoxPalListBase_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_6_OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* createdSlot);
    void BndEvt__WBP_BoxPalListBase_Slider_K2Node_ComponentBoundEvent_7_OnMouseCaptureBeginEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_BoxPalListBase_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_8_OnUpdateSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void ExecuteUbergraph_WBP_BoxPalListBase(int32 EntryPoint);
    void OnUpdateSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void OnClickedSortButton__DelegateSignature();
    void OnPrevPageInput__DelegateSignature();
    void OnNextPageInput__DelegateSignature();
    void OnSelectPalBoxPage__DelegateSignature(int32 Page);
    void OnCreatedNewSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* NewSlot);
    void OnUpdatedPage__DelegateSignature(int32 NowPage);
    void OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
}; // Size: 0x5B8

#endif
