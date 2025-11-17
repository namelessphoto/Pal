#ifndef UE4SS_SDK_WBP_Menu_PalList_HPP
#define UE4SS_SDK_WBP_Menu_PalList_HPP

class UWBP_Menu_PalList_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Pal_Alive;
    class UWidgetAnimation* Anm_Pal_Dead;
    class UWidgetAnimation* Anm_EmptyNormalToFocus;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UWidgetAnimation* Anm_Open_normal;
    class UWidgetAnimation* Anm_Normal;
    class UWidgetAnimation* Anm_Focus;
    class UWidgetAnimation* Anm_push;
    class UWidgetAnimation* Anm_Open_focus;
    class UImage* Empty;
    class UImage* Image_Icon;
    class UImage* Image_Icon_Locked;
    class UProgressBar* ProgressBar_219;
    class UProgressBar* ProgressBar_Hunger;
    class UBP_PalTextBlock_C* Text_Pal_hp_L;
    class UBP_PalTextBlock_C* Text_Pal_hp_R;
    class UBP_PalTextBlock_C* Text_Pal_Level;
    class UBP_PalTextBlock_C* Text_Pal_LvText;
    class UBP_PalTextBlock_C* Text_Pal_name;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_Menu_PalList_COnClickedPanel OnClickedPanel;
    void OnClickedPanel(class UPalIndividualCharacterHandle* Handle);
    FWBP_Menu_PalList_COnHoveredPanel OnHoveredPanel;
    void OnHoveredPanel(class UPalIndividualCharacterHandle* Handle);
    EPalWazaID CurrentWazaIdToUse;
    FWBP_Menu_PalList_COnUnhoveredPanel OnUnhoveredPanel;
    void OnUnhoveredPanel();
    bool Interactable;
    class UAkAudioEvent* ClickEventTmp;

    void OnUpdateSkin(const FName& NewSkinName);
    void SetMuteClickEvent(bool IsMute);
    void SetCurrentWazaId(EPalWazaID WazaID);
    void SetInteractable(bool IsInteractable);
    void UpdateWazaLearnable(class UPalIndividualCharacterParameter* Individual Parameter, EPalWazaID WazaID);
    void Focus();
    void Unbind();
    void BindFromHandle(class UPalIndividualCharacterHandle* targetHandle);
    void UpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void UpdateFavorite(int32 NewIndex);
    void UpdateHunger(double Now, double Max);
    void UpdateNickname(FString NewNickName);
    void Update Level(int32 NewLevel);
    void AnmEvent_Push();
    void AnmEvent_Open();
    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void AnmEvent_ResetPush();
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_Menu_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Menu_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Menu_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Menu_PalList(int32 EntryPoint);
    void OnUnhoveredPanel__DelegateSignature();
    void OnHoveredPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle);
    void OnClickedPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle);
};

#endif
