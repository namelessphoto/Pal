#ifndef UE4SS_SDK_WBP_MainMenu_Technology_00_HPP
#define UE4SS_SDK_WBP_MainMenu_Technology_00_HPP

class UWBP_MainMenu_Technology_00_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCommonListView* CommonListView;
    class UImage* FrameFlare;
    class UCanvasPanel* HorizontalBox_SearchName;
    class UPalEditableTextBox* PalEditableTextBox_Search;
    class UWBP_CommonButton_1_C* WBP_CommonButton_Filter;
    class UWBP_MainMenu_Technology_Point_C* WBP_MainMenu_Technology_Point;
    class UWBP_MainMenu_Technology_Point_C* WBP_MainMenu_Technology_Point_Boss;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_SerchName;
    TMap<int32, FF_PalUITechnologyDataMapContent> TechnologyMap;
    FWBP_MainMenu_Technology_00_COnClickedTchnology OnClickedTchnology;
    void OnClickedTchnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    FWBP_MainMenu_Technology_00_COnHoveredTechnology OnHoveredTechnology;
    void OnHoveredTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    FWBP_MainMenu_Technology_00_COnUnhoveredTechnology OnUnhoveredTechnology;
    void OnUnhoveredTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    int32 MaxTechnologyLevel;
    int32 MinTechnologyLevel;
    class UWBP_MainMenu_Technology_List_C* LastHoveredListWidget;
    class UWBP_MainMenu_Technology_Content_C* LastHoveredButtonWidget;
    TMap<class UObject*, class UWBP_MainMenu_Technology_List_C*> ListViewDisplayWidgetMap;
    int32 LastFocusHorizontalIndex;
    class UObject* DesiredFocusEntry;
    FWBP_MainMenu_Technology_00_COnNameFilterApplied OnNameFilterApplied;
    void OnNameFilterApplied(FText newText);
    FWBP_MainMenu_Technology_00_COnFilterButtonClicked OnFilterButtonClicked;
    void OnFilterButtonClicked();
    bool FocusToggle;

    void IsSkillUnlockMask(TArray<FName>& ItemIds, bool& Masked);
    void GetUnlockFilter(bool ShowUnlocked, const FName& technologyName, bool& Return);
    void GetCategoryFilter(const FPalTechnologyRecipeUnlockDataTableRow& TechData, TSet<EPalItemTypeA> ItemTypes, TSet<EPalBuildObjectTypeA> BuildTypes, bool& Return);
    void GetNameFilter(FString Filter, const FPalTechnologyRecipeUnlockDataTableRow& TechData, bool& Return);
    void Apply Technology Filter(FText FilterName, TSet<EPalItemTypeA> ItemTypes, TSet<EPalBuildObjectTypeA> BuildTypes, bool ShowUnlocked);
    void FocusToFilter();
    void SetTechContentFocus(class UWBP_MainMenu_Technology_List_C* Target);
    void Focus to Local Player Level Technology Target();
    void UpdateAllTechnologyButton();
    class UWidget* CustomNavi_Up(EUINavigation Navigation);
    class UWidget* Custom Navi Down(EUINavigation Navigation);
    void OnHoveredAnyTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget, class UWBP_MainMenu_Technology_List_C* ListWidget);
    void OnUnhoveredAnyTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnClickedAnyTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget);
    void Focus To Top Target();
    void SetupTechnologyList();
    void CreateTechnologyMap();
    void Setup();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void BndEvt__WBP_MainMenu_Technology_00_CommonListView_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
    void BndEvt__WBP_MainMenu_Technology_00_CommonListView_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void BndEvt__WBP_MainMenu_Technology_00_CommonListView_K2Node_ComponentBoundEvent_4_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget);
    void BndEvt__WBP_MainMenu_Technology_00_WBP_PalInvisibleButton_SerchName_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Technology_00_WBP_PalInvisibleButton_SerchName_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Technology_00_WBP_PalInvisibleButton_SerchName_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Technology_00_WBP_CommonButton_Filter_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void BndEvt__WBP_MainMenu_Technology_00_PalEditableTextBox_Search_K2Node_ComponentBoundEvent_8_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
    void ExecuteUbergraph_WBP_MainMenu_Technology_00(int32 EntryPoint);
    void OnFilterButtonClicked__DelegateSignature();
    void OnNameFilterApplied__DelegateSignature(FText newText);
    void OnUnhoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnHoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnClickedTchnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
};

#endif
