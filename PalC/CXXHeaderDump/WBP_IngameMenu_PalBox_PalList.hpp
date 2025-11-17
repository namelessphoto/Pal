#ifndef UE4SS_SDK_WBP_IngameMenu_PalBox_PalList_HPP
#define UE4SS_SDK_WBP_IngameMenu_PalBox_PalList_HPP

class UWBP_IngameMenu_PalBox_PalList_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Pal_Alive;
    class UWidgetAnimation* Anm_Pal_Dead;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UWidgetAnimation* Anm_Focus;
    class UWidgetAnimation* Anm_Normal;
    class UBP_PalTextBlock_C* BP_PalTextBlock_LvText;
    class UCanvasPanel* CanvasPanel_119;
    class UImage* Empty;
    class UProgressBar* Gauge_HP;
    class UProgressBar* Gauge_Hunger;
    class UImage* Image_Check;
    class UImage* Image_HP_Bar;
    class UImage* Image_Huger_Bar;
    class UImage* Image_Icon_Locked;
    class UImage* Image_Pal_List_Bar;
    class UImage* PalIcon;
    class UCanvasPanel* PalSelect_BaseTri;
    class URetainerBox* RetainerBox_0;
    class UBP_PalTextBlock_C* Text_HP;
    class UBP_PalTextBlock_C* Text_LevelValue;
    class UBP_PalTextBlock_C* Text_MaxHP;
    class UBP_PalTextBlock_C* Text_NickName;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    TSoftObjectPtr<UPalIndividualCharacterParameter> lastBindedIndividualParam;
    FWBP_IngameMenu_PalBox_PalList_COnClicked OnClicked;
    void OnClicked(class UPalIndividualCharacterSlot* TargetSlot);
    FWBP_IngameMenu_PalBox_PalList_COnHovered OnHovered;
    void OnHovered(class UPalIndividualCharacterSlot* Slot);
    class UPalIndividualCharacterSlot* TargetSlot;
    FWBP_IngameMenu_PalBox_PalList_COnUnhovered OnUnhovered;
    void OnUnhovered();
    class UMaterialInstanceDynamic* dynamicMaterial;
    bool bEnableDragDrop;

    void Unbind();
    void OnUpdateSkin(const FName& NewSkinName);
    void SetEnableDragDrop(bool bIsEnable);
    void OnUpdateHandleSlot(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle);
    void BindFromSlot(class UPalIndividualCharacterSlot* TargetSlot);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void DraggedButtonEvent(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    void Update Level(int32 NewLevel);
    void UpdateFavorite(int32 NewIndex);
    void UpdateHunger(double nowHunger, double nowMaxHunger);
    void UpdateNickname(FString NewNickName);
    void UpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void SetEmpty();
    void Setup(class UPalIndividualCharacterSlot* TargetSlot);
    void AnmEvent_FocusToNormal();
    void AnmEvent_NormalToFocus();
    void AnmEvent_Reset();
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList(int32 EntryPoint);
    void OnUnhovered__DelegateSignature();
    void OnHovered__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void OnClicked__DelegateSignature(class UPalIndividualCharacterSlot* TargetSlot);
};

#endif
