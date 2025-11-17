#ifndef UE4SS_SDK_WBP_OperatingTable_ItemList_HPP
#define UE4SS_SDK_WBP_OperatingTable_ItemList_HPP

class UWBP_OperatingTable_ItemList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_Info;
    class UImage* Image_NoItem;
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive;
    class UWBP_PalInGameMenuItemIcon_C* WBP_PalInGameMenuItemIcon;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_OperatingTable_ItemList_COnSelectItem OnSelectItem;
    void OnSelectItem(FName PassiveId);
    FName PassiveId;
    FWBP_OperatingTable_ItemList_COnHovered OnHovered;
    void OnHovered(class UWBP_OperatingTable_ItemList_C* SelfWidget);
    FWBP_OperatingTable_ItemList_COnUnhovered OnUnhovered;
    void OnUnhovered();

    void Setup(FName PassiveId, bool& IsValid);
    void BndEvt__WBP_OperatingTable_ItemList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_OperatingTable_ItemList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_OperatingTable_ItemList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_OperatingTable_ItemList(int32 EntryPoint);
    void OnUnhovered__DelegateSignature();
    void OnHovered__DelegateSignature(class UWBP_OperatingTable_ItemList_C* SelfWidget);
    void OnSelectItem__DelegateSignature(FName PassiveId);
};

#endif
