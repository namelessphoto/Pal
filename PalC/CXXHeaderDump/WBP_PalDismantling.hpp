#ifndef UE4SS_SDK_WBP_PalDismantling_HPP
#define UE4SS_SDK_WBP_PalDismantling_HPP

class UWBP_PalDismantling_C : public UPalUIDismantling
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Demolish;
    class UImage* Base;
    class UImage* Base_L;
    class UImage* Base_R;
    class UImage* Image_1;
    class UImage* Image_L;
    class UImage* Image_R;
    class UWBP_IngameConstruction_Dismantling_C* WBP_IngameConstruction_Dismantling;
    FPalDataTableRowName_UIInputAction CancelDismantlingActionInput;
    FPalDataTableRowName_UIInputAction CancelDismantlingActionInput_02;
    FPalDataTableRowName_UIInputAction CancelDismantlingActionInput_03;
    FPalDataTableRowName_UIInputAction ForceCloseDismantlingActionInput;
    FPalDataTableRowName_UIInputAction DismantleObjectActionInput;
    class UPalUIDismantlingModel* Model;
    class UPalBuilderComponent* BuilderComponent;
    FPalDataTableRowName_UIInputAction DismantleObjectContinuousActionInput;
    class APalBuildObject* DismantleTargetObject;
    FPalDataTableRowName_UIInputAction CancelDismantlingActionInput_FromRadialMenu;
    FPalDataTableRowName_UIInputAction CancelDismantlingActionInput_FromRadialMenu_0;

    void EmptyFunction();
    void DismantleObjectSuccessed();
    void DismantleObjectFailed();
    void InitUI();
    void ResetUI();
    void UpdateUI();
    void GetWarningText(FText& WarningText);
    void DisposeModel();
    void FinishDismantling();
    void DismantleObjectContinuous();
    void DismantlingObject();
    void ReturnToMainMenu();
    void SetupInputAction();
    void Setup Model();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnSetup();
    void Destruct();
    void ExecuteUbergraph_WBP_PalDismantling(int32 EntryPoint);
};

#endif
