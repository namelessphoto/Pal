#ifndef UE4SS_SDK_WBP_CharaCre_PresetButton_HPP
#define UE4SS_SDK_WBP_CharaCre_PresetButton_HPP

class UWBP_CharaCre_PresetButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Click;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UImage* Base;
    class UImage* Frame;
    class UImage* Image_PresetIcon;
    class UImage* NameBase;
    class UBP_PalTextBlock_C* Text_Name;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FDataTableRowHandle MsgID;
    FName Bind Preset Name;
    FWBP_CharaCre_PresetButton_COnClicked OnClicked;
    void OnClicked(class UWBP_CharaCre_PresetButton_C* Widget);

    void GetBindedPresetName(FName& PresetName);
    void Setup(FName BindPresetName, int32 ButtonIndex);
    void AnmEvent_Hover();
    void AnmEvent_Unhover();
    void BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_CharaCre_PresetButton(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_CharaCre_PresetButton_C* Widget);
};

#endif
