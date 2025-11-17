#ifndef UE4SS_SDK_WBP_CharaCre_Tab_HPP
#define UE4SS_SDK_WBP_CharaCre_Tab_HPP

class UWBP_CharaCre_Tab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Focus;
    class UWidgetAnimation* Anm_Normal;
    class UBP_PalTextBlock_C* Text_Title;
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;
    FWBP_CharaCre_Tab_COnClicked OnClicked;
    void OnClicked(class UWBP_CharaCre_Tab_C* TabWidget);
    FDataTableRowHandle MsgID;
    TEnumAsByte<E_UICharacterMakeCategory> BindCategoryType;

    void GetBindedCategory(TEnumAsByte<E_UICharacterMakeCategory>& CategoryType);
    void AnmEvent_Normal();
    void AnmEvent_Focus();
    void OnInitialized();
    void BndEvt__WBP_CharaCre_Tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_CharaCre_Tab(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_CharaCre_Tab_C* TabWidget);
};

#endif
