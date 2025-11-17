#ifndef UE4SS_SDK_WBP_CharaCre_MenuButton_HPP
#define UE4SS_SDK_WBP_CharaCre_MenuButton_HPP

class UWBP_CharaCre_MenuButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UImage* FocusFrame;
    class UImage* Frame;
    class UBP_PalTextBlock_C* Text_Main;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_CharaCre_MenuButton_COnClicked OnClicked;
    void OnClicked(class UWBP_CharaCre_MenuButton_C* Button);
    TEnumAsByte<E_UICharacterMakeCategory> BindCategory;
    TMap<TEnumAsByte<E_UICharacterMakeCategory>, FDataTableRowHandle> MsgIDMap;

    void GetBindedCategory(TEnumAsByte<E_UICharacterMakeCategory>& CategoryType);
    void AnmEvent_Select();
    void AnmEvent_Normal();
    void AnmEvent_Reset();
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_CharaCre_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Destruct();
    void ExecuteUbergraph_WBP_CharaCre_MenuButton(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button);
};

#endif
