#ifndef UE4SS_SDK_WBP_PalStorageSortTypeButton_HPP
#define UE4SS_SDK_WBP_PalStorageSortTypeButton_HPP

class UWBP_PalStorageSortTypeButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Select;
    class UWidgetAnimation* Anm_Unselect;
    class UWidgetAnimation* Anm_UnfocusToFocus;
    class UImage* Base;
    class UImage* Frame;
    class UBP_PalTextBlock_C* Text_SortType;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    EPalCharacterContainerSortType BindSortType;
    FWBP_PalStorageSortTypeButton_COnClicked OnClicked;
    void OnClicked(class UWBP_PalStorageSortTypeButton_C* Widget);
    TMap<class EPalCharacterContainerSortType, class FDataTableRowHandle> BoxSortTypeMsgIDMap;

    void GetBindedSortType(EPalCharacterContainerSortType& SortType);
    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void AnmEvent_ResetFocus();
    void AnmEvent_ResetSelect();
    void AnmEvent_Select();
    void AnmEvent_Unselect();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__WBP_PalStorageSortTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalStorageSortTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalStorageSortTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_PalStorageSortTypeButton(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_PalStorageSortTypeButton_C* Widget);
};

#endif
