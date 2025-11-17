#ifndef UE4SS_SDK_WBP_IngameMenu_WorkSpace_HPP
#define UE4SS_SDK_WBP_IngameMenu_WorkSpace_HPP

class UWBP_IngameMenu_WorkSpace_C : public UPalUIPaldex
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_77;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;
    class UBP_PalTextBlock_C* BP_PalTextBlock_NoRecipe;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Num;
    class UCanvasPanel* CanvasPanelIcon;
    class UCanvasPanel* CanvasPanelMaterialText;
    class UCanvasPanel* CanvasPanelSelect;
    class UCheckBox* CheckBox;
    class UImage* DurableFrameB;
    class UHorizontalBox* HorizontalBox_ProductNum;
    class UHorizontalBox* HorizontalBox_TransportCheckBox;
    class UBP_PalTextBlock_C* Text_FilterContent;
    class UBP_PalTextBlock_C* Text_ItemNumTitle;
    class UBP_PalTextBlock_C* Text_ItemNumValue;
    class UBP_PalTextBlock_C* Text_ManMonth_Value;
    class UWBP_ConvertItemMenuScrollList_C* WBP_ConvertItemMenuScrollList;
    class UWBP_IngameCommonSelectNum_C* WBP_IngameCommonSelectNum;
    class UWBP_IngameMenu_WorkSpace_StartButton_C* WBP_IngameMenu_StartButton;
    class UWBP_InventoryEquipment_ItemInfo_Tecnology_C* WBP_InventoryEquipment_ItemInfo_Tecnology;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UWBP_PalInGameMenuItemIcon_C* WBP_PalInGameMenuItemIcon;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_TransportCheck;
    class UBP_PalUIConvertItemModel_C* Convert Item Model;
    int32 CurrentProductAmount;
    FName InputActionName_Max;
    bool IsSelectingProductNumFlag;
    class UWBP_PalConvertItemMenu_RecipeSlotButton_C* LastSelectedSlot;
    FName InputActionName_Start;
    FName InputActionName_Cancel;
    TArray<FPalStaticItemIdAndNum> TmpComtrollableBlueprintInfo;
    FTimerHandle UpdateRecipeTimer;
    FName InputActionName_CanTransportOut;

    void InputMethodChanged(ECommonInputType InputType);
    void OnUpdateCanTransportOut(bool bOn);
    void FilteringRecipe(TArray<FName>& RecipeIDArray, TArray<FName>& FilteredArray);
    void OnCancelInput();
    void IsSelectingProductNum(bool& IsSelecting);
    void FilterSkillUnlocker(TArray<FName>& Recipes, FName WorkBenchId, TArray<FName>& FilteredRecipes);
    class UWidget* BP_GetDesiredFocusTarget();
    void Update Recipe Detail();
    void OnClickedRecipeSlot(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Slot);
    void OnUnhoveredRecipeSlot(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Slot);
    void OnHoveredRecipeSlot(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Slot);
    void Setup();
    void OnSetup();
    void SetMax();
    void BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_StartButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void StartProduce();
    void BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void ToggleCanTransportOut();
    void Destruct();
    void BndEvt__WBP_IngameMenu_WorkSpace_WBP_PalInvisibleButton_TransportCheck_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Construct();
    void BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameCommonSelectNum_K2Node_ComponentBoundEvent_5_OnUpdateNum__DelegateSignature(int64 Num);
    void ExecuteUbergraph_WBP_IngameMenu_WorkSpace(int32 EntryPoint);
};

#endif
