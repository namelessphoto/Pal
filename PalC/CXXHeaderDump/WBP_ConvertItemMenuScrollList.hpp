#ifndef UE4SS_SDK_WBP_ConvertItemMenuScrollList_HPP
#define UE4SS_SDK_WBP_ConvertItemMenuScrollList_HPP

class UWBP_ConvertItemMenuScrollList_C : public UWBP_PalCommonScrollList_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FWBP_ConvertItemMenuScrollList_COnClickedContent OnClickedContent;
    void OnClickedContent(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    FWBP_ConvertItemMenuScrollList_COnHoverdContent OnHoverdContent;
    void OnHoverdContent(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    FWBP_ConvertItemMenuScrollList_COnUnhoveredContent OnUnhoveredContent;
    void OnUnhoveredContent(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    FWBP_ConvertItemMenuScrollList_COnFocusedContent OnFocusedContent;
    void OnFocusedContent(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    FWBP_ConvertItemMenuScrollList_COnUnfocusedContent OnUnfocusedContent;
    void OnUnfocusedContent(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    class UWBP_PalConvertItemMenu_RecipeSlotButton_C* LastFocusButton;

    void GetFocusTarget(class UWidget*& Target);
    void FocusWithRecipeID(FName RecipeID);
    void Focus();
    void OnUnfocusedContent_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnFocusedContent_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnUnhoveredContent_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnHoveredContent_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnClickedContent_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void AddRecipeSet(TArray<FName>& RecipeIDArray, class UPalMapObjectConcreteModelBase* ConcreteModel, class UWBP_ConvertItemMenuScrollListBlock_C*& createdBlock);
    void Construct();
    void ExecuteUbergraph_WBP_ConvertItemMenuScrollList(int32 EntryPoint);
    void OnUnfocusedContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnFocusedContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnUnhoveredContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnHoverdContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnClickedContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
};

#endif
