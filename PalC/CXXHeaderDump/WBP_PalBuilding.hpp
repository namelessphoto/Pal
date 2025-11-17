#ifndef UE4SS_SDK_WBP_PalBuilding_HPP
#define UE4SS_SDK_WBP_PalBuilding_HPP

class UWBP_PalBuilding_C : public UPalUIBuilding
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Default_In;
    class UWBP_BuildingReticle_C* WBP_BuildingReticle;
    class UWBP_IngameConstruction_C* WBP_IngameConstruction;
    class UBP_PalUIBuildingModel_C* Model;
    TMap<class EPalMapObjectOperationResult, class FDataTableRowHandle> FailedMessageMap;
    FDataTableRowHandle FailedMessageOther;
    class UPalBuilderComponent* BuilderComponent;
    EPalMapObjectOperationResult lastWarningType;
    bool isExitMaterial;
    FPalDataTableRowName_UIInputAction CancelBuildingActionInput;
    FPalDataTableRowName_UIInputAction CancelBuildingActionInput_02;
    FPalDataTableRowName_UIInputAction CancelBuildingActionInput_03;
    FPalDataTableRowName_UIInputAction ForceCloseBuildingActionInput;
    FPalDataTableRowName_UIInputAction BuildObjectActionInput;
    FPalDataTableRowName_UIInputAction BuildObjectContinuousActionInput;
    FPalDataTableRowName_UIInputAction CancelBuildingActionInput_ForRadialMenu;
    FPalDataTableRowName_UIInputAction BuildRotateRightActionInput;
    FPalDataTableRowName_UIInputAction BuildRotateLeftActionInput;
    FPalDataTableRowName_UIInputAction BuildChangeMode;
    bool NewVar;
    FTimerHandle UpdateDisplayTimer;
    FPalDataTableRowName_UIInputAction BuildChangeSnapMode;
    FPalDataTableRowName_UIInputAction BuildChangeReplaceMode;

    void ToggleChangeReplaceMode();
    void ChangeSnapModeOff();
    void ChangeSnapModeOn();
    void ChangeModeOff();
    void ChangeModeOn();
    void UpdateOutsideBaseCampWarning();
    void OnLeaveBaseCamp();
    void OnEnterBaseCamp(class UPalBaseCampModel* Model);
    void UnregisterInsideBaseCampEvent();
    void RegisterInsideBaseCampEvent();
    void RotateLeft();
    void RotateRight();
    void Get Build Operation Result(EPalMapObjectOperationResult& Result);
    void EmptyFunction();
    void GetWarningText(EPalMapObjectOperationResult Result, FText& Text);
    void BuildObjectContinuous();
    void BuildObject();
    void Finish Building();
    void ReturnToMainMenu();
    void SetupInputAction();
    void ResetUI();
    void SetupUI();
    void DisposeModel();
    void Setup Model();
    void OnSetup();
    void Destruct();
    void UpdateDisplay();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_PalBuilding(int32 EntryPoint);
};

#endif
