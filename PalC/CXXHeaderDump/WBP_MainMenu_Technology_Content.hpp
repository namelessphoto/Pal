#ifndef UE4SS_SDK_WBP_MainMenu_Technology_Content_HPP
#define UE4SS_SDK_WBP_MainMenu_Technology_Content_HPP

class UWBP_MainMenu_Technology_Content_C : public UPalUIRecipeTechnologyDetailButton
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Ancient_LockToUnlock;
    class UWidgetAnimation* Anm_Ancient_Lock;
    class UWidgetAnimation* Anm_Ancient_UnLock;
    class UWidgetAnimation* Anm_LockToUnlock;
    class UWidgetAnimation* Anm_Disable;
    class UWidgetAnimation* Anm_Unlock;
    class UWidgetAnimation* Anm_Lock;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Category;
    class UImage* Image_Icon;
    class UImage* Image_Icon_TechPoint_0;
    class UImage* Image_Icon_TechPoint_1;
    class UInvalidationBox* InvalidationBox_0;
    class UOverlay* Overlay_Prereq;
    class UBP_PalRichTextBlock_C* RichText_TechnologyName_Lock;
    class UBP_PalRichTextBlock_C* RichText_TechnologyName_Unlock;
    class UCanvasPanel* TechnologyOpacity;
    class UBP_PalTextBlock_C* Text_Prereq;
    class UBP_PalTextBlock_C* Text_RequirePointNum;
    class UWBP_MainMenu_NewDot_C* WBP_MainMenu_NewDot;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FPalDataTableRowName_RecipeTechnologyData Technology;
    FWBP_MainMenu_Technology_Content_COnHoveredButton OnHoveredButton;
    void OnHoveredButton(class UWBP_MainMenu_Technology_Content_C* Widget);
    FWBP_MainMenu_Technology_Content_COnUnhoveredButton OnUnhoveredButton;
    void OnUnhoveredButton(class UWBP_MainMenu_Technology_Content_C* Widget);
    FWBP_MainMenu_Technology_Content_COnClickedButton OnClickedButton;
    void OnClickedButton(class UWBP_MainMenu_Technology_Content_C* Widget);
    bool isFocused;
    FDataTableRowHandle UnlockBuildObjectInfoMsgId;
    FDataTableRowHandle UnlockRecipeInfoMsgId;
    FDataTableRowHandle MaskUnknownMsgId;
    FName BindedTechnologyName;
    bool ShouldMask;
    bool Is Boss Technology;
    FDataTableRowHandle BuildingMsgId;
    FDataTableRowHandle ItemMsgId;

    void GetLabResearchTextId(FName ResearchId, FText& Return Value);
    void Set Should Mask Skill Unlock(TArray<FName>& ItemRecipes);
    void Update Button Detail();
    void OnUnhovered_Internal();
    void isUnlockable(bool& isUnlockable);
    void IsUnlocked(bool& IsUnlocked);
    void GetBindedTechnologyName(FName& technologyName);
    void Setup(FName technologyName);
    void OnHovered_Internal();
    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void AnmEvent_UpdateDetail();
    void AnmEvent_Unlock();
    void OnInitialized();
    void BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Construct();
    void ExecuteUbergraph_WBP_MainMenu_Technology_Content(int32 EntryPoint);
    void OnClickedButton__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnUnhoveredButton__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnHoveredButton__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
};

#endif
