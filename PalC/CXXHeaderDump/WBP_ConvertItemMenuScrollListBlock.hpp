#ifndef UE4SS_SDK_WBP_ConvertItemMenuScrollListBlock_HPP
#define UE4SS_SDK_WBP_ConvertItemMenuScrollListBlock_HPP

class UWBP_ConvertItemMenuScrollListBlock_C : public UPalUserWidget
{
    class UWrapBox* WrapBox;
    FWBP_ConvertItemMenuScrollListBlock_COnClickedAnyContent OnClickedAnyContent;
    void OnClickedAnyContent(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    FWBP_ConvertItemMenuScrollListBlock_COnHoveredAnyContent OnHoveredAnyContent;
    void OnHoveredAnyContent(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    FWBP_ConvertItemMenuScrollListBlock_COnUnhoveredAnyContent OnUnhoveredAnyContent;
    void OnUnhoveredAnyContent(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);

    void GetFocusTarget(class UWidget*& Target);
    void FocusTopContent();
    void OnUnhovered_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* selftWidget);
    void OnHovered_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* SelfWidget);
    void OnClicked_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void SetCategoryName(FText categoryNameText);
    void AddRecipeList(TArray<FName>& RecipeIDArray, class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OnUnhoveredAnyContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnHoveredAnyContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnClickedAnyContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
};

#endif
