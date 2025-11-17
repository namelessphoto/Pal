#ifndef UE4SS_SDK_WBP_PalStorageSortSettingWindow_HPP
#define UE4SS_SDK_WBP_PalStorageSortSettingWindow_HPP

class UWBP_PalStorageSortSettingWindow_C : public UPalUIPalBoxSortWindow
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UGridPanel* GridPanel_ElementFilter;                                        // 0x0438 (size: 0x8)
    class UGridPanel* GridPanel_SuitabilityFilter;                                    // 0x0440 (size: 0x8)
    class UImage* Image_21;                                                           // 0x0448 (size: 0x8)
    class UImage* Image_22;                                                           // 0x0450 (size: 0x8)
    class UImage* Image_103;                                                          // 0x0458 (size: 0x8)
    class UImage* Image_140;                                                          // 0x0460 (size: 0x8)
    class UImage* Image_Dark;                                                         // 0x0468 (size: 0x8)
    class UPalCheckBox* PalCheckBox_Favorite_01;                                      // 0x0470 (size: 0x8)
    class UPalCheckBox* PalCheckBox_Favorite_02;                                      // 0x0478 (size: 0x8)
    class UPalCheckBox* PalCheckBox_Favorite_03;                                      // 0x0480 (size: 0x8)
    class UPalCheckBox* PalCheckBox_Gender_Female;                                    // 0x0488 (size: 0x8)
    class UPalCheckBox* PalCheckBox_Gender_Male;                                      // 0x0490 (size: 0x8)
    class UPalCheckBox* PalCheckBox_ImportedPal;                                      // 0x0498 (size: 0x8)
    class UPalComboBoxString* PalComboBoxString_Passive;                              // 0x04A0 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_ClearPassive;                       // 0x04A8 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_Sort;                               // 0x04B0 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x04B8 (size: 0x8)
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;                                // 0x04C0 (size: 0x8)
    class UWBP_PalGenderIcon_C* WBP_PalGenderIcon_Female;                             // 0x04C8 (size: 0x8)
    class UWBP_PalGenderIcon_C* WBP_PalGenderIcon_Male;                               // 0x04D0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Favorite_01;              // 0x04D8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Favorite_02;              // 0x04E0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Favorite_03;              // 0x04E8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_GenderFemale;             // 0x04F0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_GenderMale;               // 0x04F8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_ImportedPal;              // 0x0500 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0508 (size: 0x8)
    class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox; // 0x0510 (size: 0x8)
    class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox_1; // 0x0518 (size: 0x8)
    class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox_2; // 0x0520 (size: 0x8)
    class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox_3; // 0x0528 (size: 0x8)
    class UWBP_PalStorageSortTypeButton_C* WBP_PalStorageSortTypeButton;              // 0x0530 (size: 0x8)
    class UWBP_PalStorageSortTypeButton_C* WBP_PalStorageSortTypeButton_1;            // 0x0538 (size: 0x8)
    class UWBP_PalStorageSortTypeButton_C* WBP_PalStorageSortTypeButton_2;            // 0x0540 (size: 0x8)
    class UWBP_PalStorageSortTypeButton_C* WBP_PalStorageSortTypeButton_3;            // 0x0548 (size: 0x8)
    class UWBP_PalStorageSortTypeButton_C* WBP_PalStorageSortTypeButton_4;            // 0x0550 (size: 0x8)
    class UWBP_PalStorageSortTypeButton_C* WBP_PalStorageSortTypeButton_5;            // 0x0558 (size: 0x8)
    class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox; // 0x0560 (size: 0x8)
    class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox_1; // 0x0568 (size: 0x8)
    class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox_2; // 0x0570 (size: 0x8)
    class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox_3; // 0x0578 (size: 0x8)
    TMap<class EPalElementType, class UWBP_PalStorageSortElementFilterCheckBox_C*> ElementTypeCheckBoxMap; // 0x0580 (size: 0x50)
    TArray<class UWBP_PalStorageSortTypeButton_C*> SortTypeButtonArray;               // 0x05D0 (size: 0x10)
    EPalCharacterContainerSortType SelectedSortType;                                  // 0x05E0 (size: 0x1)
    TMap<class EPalWorkSuitability, class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C*> WorkSuitabilityCheckBoxMap; // 0x05E8 (size: 0x50)
    FPalCharacterContainerSortInfo CachedSortInfo;                                    // 0x0638 (size: 0x48)
    int32 MaxColumnNum_CheckBox;                                                      // 0x0680 (size: 0x4)
    TArray<FName> PassiveIds;                                                         // 0x0688 (size: 0x10)
    bool IgnoreCloseEvent;                                                            // 0x0698 (size: 0x1)
    FPalDataTableRowName_UIInputAction SortActionName;                                // 0x069C (size: 0x8)

    void CollectFavoriteIndex(TArray<uint8>& ByteArray);
    void SetupFavoriteCheck(TArray<uint8>& IndexArray);
    void SortInternal();
    void CloseEvent();
    class UWidget* CustomNavi_ToSortTypeTop(EUINavigation Navigation);
    class UWidget* CustomNavi_ToFavoriteCheckBox(EUINavigation Navigation);
    class UWidget* CustomNavi_ToSortButton(EUINavigation Navigation);
    void CacheSortInfo();
    class UWidget* CustomNavi_ToCloseButton(EUINavigation Navigation);
    void ApplyCachedSortInfo();
    class UWidget* BP_GetDesiredFocusTarget();
    void CollectFilteringSuitability(TArray<EPalWorkSuitability>& SuitabilityArray);
    void CollectFilteringElementType(TArray<EPalElementType>& ElementTypeArray);
    void OnClickedElementTypeCheckBox(bool bChecked, EPalElementType ElementType);
    void OnClickedWorkSuitabilityCheckBox(bool bChecked, EPalWorkSuitability WorkSuitbility);
    void Setup Sort Type Button();
    void Setup Passive Combo Box();
    void SetupWorkSuitabilityCheckBox();
    void OnClickedSortTypeButton(class UWBP_PalStorageSortTypeButton_C* Widget);
    void SetupElementTypeCheckBox();
    void OnInitialized();
    void Destruct();
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_CommonButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnSetup();
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_GenderMale_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_GenderFemale_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_CommonButton_Sort_1_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void BndEvt__WBP_PalStorageSortSettingWindow_PalComboBoxString_Passive_K2Node_ComponentBoundEvent_7_OnOpeningEvent__DelegateSignature();
    void BndEvt__WBP_PalStorageSortSettingWindow_PalComboBoxString_Passive_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_02_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_03_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_ImportedPal_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_PalStorageSortSettingWindow(int32 EntryPoint);
}; // Size: 0x6A4

#endif
