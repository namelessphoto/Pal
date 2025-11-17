#ifndef UE4SS_SDK_WBP_PalConvertItemMenu_RecipeSlotButton_HPP
#define UE4SS_SDK_WBP_PalConvertItemMenu_RecipeSlotButton_HPP

class UWBP_PalConvertItemMenu_RecipeSlotButton_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_rarity;
    class UWidgetAnimation* Anm_Select;
    class UImage* Base;
    class UCanvasPanel* CanvasPanel_Num;
    class UCanvasPanel* CanvasPanelRarety;
    class UImage* FocusBase;
    class UImage* FocusFrame;
    class UImage* Frame_Focus_Flare;
    class UImage* Image_Disable;
    class UBP_PalTextBlock_C* Text_Num;
    class UWBP_InventoryEquipment_PalIcon_C* WBP_InventoryEquipment_PalIcon;
    class UWBP_PalInGameMenuItemIcon_C* WBP_PalInGameMenuItemIcon;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_PalConvertItemMenu_RecipeSlotButton_COnClickSlot OnClickSlot;
    void OnClickSlot(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* SelfWidget);
    FName RecipeID;
    FWBP_PalConvertItemMenu_RecipeSlotButton_COnHoveredSlot OnHoveredSlot;
    void OnHoveredSlot(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* SelfWidget);
    FWBP_PalConvertItemMenu_RecipeSlotButton_COnUnhoveredSlot OnUnhoveredSlot;
    void OnUnhoveredSlot(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* SelfWidget);
    bool Selected;
    TMap<FName, int32> MatMap;
    FName Product Id;
    FTimerHandle UpdateSufficientTimer;

    void UpdateSufficient();
    void SetPalGearIcon(FName ItemId);
    void SetUnselect();
    void GetRecipeId(FName& RecipeID);
    void Setup(FName RecipeID, TArray<FPalStaticItemIdAndNum>& MatInfo);
    void BndEvt__WBP_PalConvertItemMenu_RecipeSlotButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalConvertItemMenu_RecipeSlotButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalConvertItemMenu_RecipeSlotButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Destruct();
    void ExecuteUbergraph_WBP_PalConvertItemMenu_RecipeSlotButton(int32 EntryPoint);
    void OnUnhoveredSlot__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* SelfWidget);
    void OnHoveredSlot__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* SelfWidget);
    void OnClickSlot__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* SelfWidget);
};

#endif
