#ifndef UE4SS_SDK_WBP_MainMenu_Technology_List_HPP
#define UE4SS_SDK_WBP_MainMenu_Technology_List_HPP

class UWBP_MainMenu_Technology_List_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_LockToUnlock;
    class UHorizontalBox* HorizontalBox_TechnologyButton;
    class UImage* Image_Line;
    class USizeBox* SizeBox_BossTech;
    class UBP_PalTextBlock_C* Text_TechnologyLevel;
    FWBP_MainMenu_Technology_List_COnClickedTechnology OnClickedTechnology;
    void OnClickedTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    FWBP_MainMenu_Technology_List_COnHoveredTechnoogy OnHoveredTechnoogy;
    void OnHoveredTechnoogy(class UWBP_MainMenu_Technology_Content_C* Widget, class UWBP_MainMenu_Technology_List_C* ListWidget);
    FWBP_MainMenu_Technology_List_COnUnhoveredTechnology OnUnhoveredTechnology;
    void OnUnhoveredTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    int32 CachedPlayerLevel;
    int32 CachedTechnologyLevel;
    TArray<class UWBP_MainMenu_Technology_Content_C*> TechnologyContents;
    class UWBP_MainMenu_Technology_Content_C* BossTech;

    void UpdateAllButtonDetail();
    void Update List Active();
    void OnUpdatePlayerLevel(int32 addLevel, int32 nowLevel);
    void UnregisterPlayerEvent();
    void RegisterPlayerEvent();
    void UnregisterAllButtonEvent();
    void GetFocusTargetByIndex(int32 ButtonIndex, class UWidget*& Widget);
    void GetButtonIndex(class UWBP_MainMenu_Technology_Content_C* ButtonWidget, int32& Index);
    void GetButtonNum(int32& Num);
    void OnUnhoveredTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnHoveredTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnClickedTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget);
    void RegisterButtonEvent(class UWBP_MainMenu_Technology_Content_C* TechnologyContentWidget);
    void Get Top Focus Target(class UWidget*& Target);
    void Set Technology Level(int32 Level);
    void Set Technology Data(FF_PalUITechnologyDataMapContent DisplayTechnologyData);
    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void AnmEvent_Unlock();
    void AnmEvent_Lock();
    void Construct();
    void Destruct();
    void OnListItemObjectSet(class UObject* ListItemObject);
    void ExecuteUbergraph_WBP_MainMenu_Technology_List(int32 EntryPoint);
    void OnUnhoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnHoveredTechnoogy__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget, class UWBP_MainMenu_Technology_List_C* ListWidget);
    void OnClickedTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
};

#endif
