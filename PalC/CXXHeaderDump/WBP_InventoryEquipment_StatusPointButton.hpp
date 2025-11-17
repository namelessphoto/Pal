#ifndef UE4SS_SDK_WBP_InventoryEquipment_StatusPointButton_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_StatusPointButton_HPP

class UWBP_InventoryEquipment_StatusPointButton_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_BonusPoint;
    class UCanvasPanel* CanvasPanel_DecrementButton;
    class UCanvasPanel* CanvasPanel_IncrementButton;
    class UImage* Icon;
    class UImage* Image_ParamArrow;
    class USizeBox* SizeBox_Arrow;
    class UBP_PalTextBlock_C* Text_Main;
    class UBP_PalTextBlock_C* Text_Param;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Decrement;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Increment;
    TMap<class FName, class FDataTableRowHandle> MagIDMap;
    TMap<class FName, class UTexture2D*> TextureMap;
    FName BindStatusPointName;
    FWBP_InventoryEquipment_StatusPointButton_COnClickedIncrement OnClickedIncrement;
    void OnClickedIncrement(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    int32 CachedPoint;
    int32 AdditionalPointForSimulate;
    FWBP_InventoryEquipment_StatusPointButton_COnClickedDecrement OnClickedDecrement;
    void OnClickedDecrement(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    FWBP_InventoryEquipment_StatusPointButton_COnHovered OnHovered;
    void OnHovered(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    FWBP_InventoryEquipment_StatusPointButton_COnUnhovered OnUnhovered;
    void OnUnhovered(class UWBP_InventoryEquipment_StatusPointButton_C* Button);

    void UpdateStatusBuffState();
    void Get Base Parameter(bool ShowBaseValue, double& Parameter);
    void ResetSimulate();
    void AddSimulatePoint(int32 SimulatePoint);
    void GetBonusRate(int32 Point, double& Bonus);
    void UpdateDecrementButtonDetail();
    void Set Enable Simulate Button(bool IsEnable);
    void Update Binded Status Detail(bool ShowBaseValue);
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_InventoryEquipment_StatusPointButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_StatusPointButton_WBP_PalInvisibleButton_Decrement_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_StatusPointButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_StatusPointButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_InventoryEquipment_StatusPointButton(int32 EntryPoint);
    void OnUnhovered__DelegateSignature(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    void OnHovered__DelegateSignature(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    void OnClickedDecrement__DelegateSignature(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    void OnClickedIncrement__DelegateSignature(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
};

#endif
