#ifndef UE4SS_SDK_WBP_AssignBoard_WorkList_Common_HPP
#define UE4SS_SDK_WBP_AssignBoard_WorkList_Common_HPP

class UWBP_AssignBoard_WorkList_Common_C : public UWBP_AssignBoard_WorkListBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Unselect;
    class UWidgetAnimation* Anm_Selected;
    class UWidgetAnimation* Anm_NormalToDisable;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UHorizontalBox* HorizontalBox_AssignedPal;
    class UHorizontalBox* HorizontalBox_Suitability;
    class UHorizontalBox* HorizontalBox_WorkNum;
    class UImage* Image_BuildingIcon;
    class UImage* Image_RecipeIcon;
    class UImage* Image_WorkStatus_Base;
    class UOverlay* Overlay_Recipe;
    class UOverlay* Overlay_WorkStatus;
    class USizeBox* SizeBox_WorkIcon_0;
    class USizeBox* SizeBox_WorkIcon_1;
    class USizeBox* SizeBox_WorkIcon_2;
    class UBP_PalTextBlock_C* Text_AssignTargetName;
    class UWBP_IconPalWork_C* WBP_IconPalWork_0;
    class UWBP_IconPalWork_C* WBP_IconPalWork_1;
    class UWBP_IconPalWork_C* WBP_IconPalWork_2;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    bool IsSelectingAnm;
    bool IsEnableAnm;
    TArray<class UWBP_IconPalWork_C*> WorkIconArray;
    TArray<class USizeBox*> WorkIconSizeBoxArray;
    FTimerHandle UpdateAssignedCharacterDetailTimerHandle;
    int32 AssignableMaxNum;

    void OnTimer_UpdateAssignedCharacterDetail();
    void GetFocusTarget(class UWidget*& TargetWidget);
    void Unbind();
    void ResetAssignedChaarcterSlotDetail();
    void OnUpdateAssignedCharacter(class UPalWorkBase* Work);
    void SetupAssignedCharacterSlot();
    void SetupWorkSuitability();
    void SetupTitle();
    void SetupWorkNum();
    void OnUpdateWorkState(class UPalWorkBase* Work);
    void SetupWorkStatus();
    void Setup();
    void SetupRecipeDetail();
    void SetupAssignTargetName();
    void AnmEvent_Hover();
    void AnmEvent_Unhover();
    void AnmEvent_Select();
    void AnmEvent_Unselect();
    void AnmEvent_Enable();
    void AnmEvent_DIsable();
    void Construct();
    void BndEvt__WBP_AssignBoard_WorkList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_AssignBoard_WorkList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_AssignBoard_WorkList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void Destruct();
    void ExecuteUbergraph_WBP_AssignBoard_WorkList_Common(int32 EntryPoint);
};

#endif
