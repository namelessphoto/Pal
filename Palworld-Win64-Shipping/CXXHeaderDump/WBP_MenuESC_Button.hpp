#ifndef UE4SS_SDK_WBP_MenuESC_Button_HPP
#define UE4SS_SDK_WBP_MenuESC_Button_HPP

class UWBP_MenuESC_Button_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UImage* Base;
    class UImage* Frame;
    class UBP_PalTextBlock_C* Text_Main;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_MenuESC_Button_COnClicked OnClicked;
    void OnClicked(TEnumAsByte<E_PalEscMenuType> MenuType);
    TEnumAsByte<E_PalEscMenuType> MenuType;
    TMap<TEnumAsByte<E_PalEscMenuType>, FDataTableRowHandle> textIDMap;

    void AnmEvent_Focus();
    void AnmEvent_Reset();
    void Construct();
    void BndEvt__WBP_MenuESC_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MenuESC_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MenuESC_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void AnmEvent_Normal();
    void ExecuteUbergraph_WBP_MenuESC_Button(int32 EntryPoint);
    void OnClicked__DelegateSignature(TEnumAsByte<E_PalEscMenuType> MenuType);
};

#endif
