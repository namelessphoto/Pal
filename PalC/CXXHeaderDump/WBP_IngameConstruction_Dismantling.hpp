#ifndef UE4SS_SDK_WBP_IngameConstruction_Dismantling_HPP
#define UE4SS_SDK_WBP_IngameConstruction_Dismantling_HPP

class UWBP_IngameConstruction_Dismantling_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Caution;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_39;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_100;
    class UCanvasPanel* Canvas_Limit;
    class UCanvasPanel* CanvasPanel_Warning;
    class UImage* Dot_0;
    class UImage* Dot_1;
    class UImage* Dot_2;
    class UImage* Dot_3;
    class UImage* Dot_4;
    class UImage* Dot_5;
    class UImage* Dot_6;
    class UImage* Dot_7;
    class UImage* Dot_8;
    class UImage* Dot_9;
    class UImage* Image_Limit_Base;
    class UImage* Image_LimitCautionIcon;
    class UImage* ItemBase_0;
    class UImage* ItemBase_1;
    class UImage* ItemBase_2;
    class UImage* ItemBase_3;
    class UImage* ItemNumBase_0;
    class UImage* ItemNumBase_1;
    class UImage* ItemNumBase_2;
    class UImage* ItemNumBase_3;
    class UImage* NameBase;
    class UBP_PalTextBlock_C* Text_Limit;
    class UBP_PalTextBlock_C* Text_LimitNum;
    class UVerticalBox* VerticalBox_1;
    class UImage* WarningBase;
    class UImage* WarningBase_Caution;
    class UImage* WarningBase_L;
    class UImage* WarningBase_R;
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide;
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_1;
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_2;
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_3;
    class UWBP_IngameConstruction_Num_C* WBP_IngameConstruction_Num_0;
    class UWBP_IngameConstruction_Num_C* WBP_IngameConstruction_Num_1;
    class UWBP_IngameConstruction_Num_C* WBP_IngameConstruction_Num_2;
    class UWBP_IngameConstruction_Num_C* WBP_IngameConstruction_Num_3;
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon_1;
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon_2;
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon_3;
    TArray<class UWBP_IngameConstruction_Num_C*> ItemNums;
    TArray<class UWBP_PalCommonItemIcon_C*> ItemIconArray;
    FDataTableRowHandle keyGuideMsgHandle_Dismantle;
    FDataTableRowHandle keyGuideMsgHandle_DismantleContinuous;
    FDataTableRowHandle keyGuideMsgHandle_Cancel;
    FDataTableRowHandle keyGuideMsgHandle_Close;

    void UpdateBuildingLimit(class UPalUIDismantlingModel* Model);
    void GetBuildingWarningType(class UPalUIDismantlingModel* Model, EPalBuildingNumWarningType& NewParam);
    void SetupKeyGuide();
    void SetEnableWarning(bool IsEnable);
    void Setup(FPalBuildObjectData inBuildObjectData);
    void SetWarningText(FText InText);
    void ResetAllUI();
    void InitUI();
    void SetMaterial(int32 Index, FName StaticItemId, int32 ItemCount);
    void SetDismantleObjectName(FText InName);
    void Construct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameConstruction_Dismantling(int32 EntryPoint);
};

#endif
