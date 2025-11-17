#ifndef UE4SS_SDK_WBP_IngameConstruction_HPP
#define UE4SS_SDK_WBP_IngameConstruction_HPP

class UWBP_IngameConstruction_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Caution;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_1;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_39;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_100;
    class UBP_PalTextBlock_C* BP_PalTextBlock_CautionTitle;
    class UCanvasPanel* Canvas_Limit;
    class UCanvasPanel* CanvasPanel_Caution;
    class UCanvasPanel* CanvasPanel_Warning;
    class UImage* Image_Limit_Base;
    class UImage* Image_LimitCautionIcon;
    class UBP_PalTextBlock_C* Text_Limit;
    class UBP_PalTextBlock_C* Text_LimitNum;
    class UVerticalBox* VerticalBox_1;
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide;
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_1;
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_2;
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_3;
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_4;
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_5;
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_6;
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_7;
    class UWBP_IngameConstruction_Num_C* WBP_IngameConstruction_Num_0;
    class UWBP_IngameConstruction_Num_C* WBP_IngameConstruction_Num_1;
    class UWBP_IngameConstruction_Num_C* WBP_IngameConstruction_Num_2;
    class UWBP_IngameConstruction_Num_C* WBP_IngameConstruction_Num_3;
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon_1;
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon_2;
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon_3;
    TArray<class UWBP_IngameConstruction_Num_C*> ItemNums;
    FDataTableRowHandle keyGuideMsgHandle_Reserve;
    FDataTableRowHandle keyGuideMsgHandle_ReserveContinue;
    FDataTableRowHandle keyGuideMsgHandle_Cancel;
    FDataTableRowHandle keyGuideMsgHandle_Close;
    TArray<class UWBP_PalCommonItemIcon_C*> ItemIconArray;
    FDataTableRowHandle keyGuideMsgHandle_RotateRight;
    FDataTableRowHandle keyGuideMsgHandle_RotateLeft;
    class UPalUIBuildingModel* CachedModel;

    void GetBuildingWarningType(class UPalUIBuildingModel* Model, EPalBuildingNumWarningType& NewParam);
    void UpdateBuildingLimit(class UPalUIBuildingModel* Model);
    void UpdateDisplayContent(class UPalUIBuildingModel* Model);
    void SetVisibilityOutSideBaseCampWarning(ESlateVisibility NewVisibility);
    void SetupKeyGuide(class UPalUIBuildingModel* Model);
    void SetEnableWarning(bool IsEnable);
    void SetMaterial(int32 Index, FName StaticItemId, int32 ItemCount);
    void Setup(FPalBuildObjectData inBuildObjectData);
    void SetWarningText(FText InText);
    void ResetAllUI(class UPalUIBuildingModel* Model);
    void SetBuildObjectName(FText InName);
    void Construct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameConstruction(int32 EntryPoint);
};

#endif
