#ifndef UE4SS_SDK_WBP_CharaCre_BodyTypeButton_HPP
#define UE4SS_SDK_WBP_CharaCre_BodyTypeButton_HPP

class UWBP_CharaCre_BodyTypeButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_UnselectToSelect;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UImage* Base;
    class UImage* Frame;
    class UBP_PalTextBlock_C* Text_BodyType;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FDataTableRowHandle MsgID;
    FName Bind Preset Name;
    FWBP_CharaCre_BodyTypeButton_COnClicked OnClicked;
    void OnClicked(class UWBP_CharaCre_BodyTypeButton_C* Widget);
    FDataTableRowHandle VoiceMsgID;
    FWBP_CharaCre_BodyTypeButton_COnHovered OnHovered;
    void OnHovered(class UWBP_CharaCre_BodyTypeButton_C* Widget);
    FWBP_CharaCre_BodyTypeButton_COnUnhovered OnUnhovered;
    void OnUnhovered();

    void SetupAsVoice(int32 ButtonIndex);
    void GetBindedPresetName(FName& PresetName);
    void Setup(FName BindPresetName, int32 ButtonIndex);
    void AnmEvent_Hover();
    void AnmEvent_Unhover();
    void AnmEvent_Select();
    void AnmEvent_Unselect();
    void BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_CharaCre_BodyTypeButton(int32 EntryPoint);
    void OnUnhovered__DelegateSignature();
    void OnHovered__DelegateSignature(class UWBP_CharaCre_BodyTypeButton_C* Widget);
    void OnClicked__DelegateSignature(class UWBP_CharaCre_BodyTypeButton_C* Widget);
};

#endif
