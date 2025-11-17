#ifndef UE4SS_SDK_WBP_IngameMenuConstruction_ItemSlot_HPP
#define UE4SS_SDK_WBP_IngameMenuConstruction_ItemSlot_HPP

class UWBP_IngameMenuConstruction_ItemSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_OnToOff_WithoutText;
    class UWidgetAnimation* Anm_LtoS;
    class UWidgetAnimation* Anm_OnToOff;
    class UCanvasPanel* CanvasPanel_2;
    class UCanvasPanel* CanvasPanel_Lock;
    class UImage* Icon;
    class UBP_PalTextBlock_C* Text_BuildObjectName;
    class UBP_PalTextBlock_C* Text_Label;
    class UWBP_MainMenu_NewDot_C* WBP_MainMenu_NewDot;
    class UWBP_PalCommonNewMark_0_C* WBP_PalCommonNewMark_0;
    FPalBuildObjectData BuildObjectData;
    FDataTableRowHandle NotEnoughMaterialMsgID;
    FDataTableRowHandle NoBlueprintlMsgID;

    void SetNewIconVisibility(bool Visable);
    FVector2D GetCanvasSize();
    void Setup(FPalBuildObjectData BuildObjectData);
    void AnmEvent_CannotBuild_NotEnoughMaterials();
    void AnmEvent_CannotBuild_NoBlueprint();
    void AnmEvent_Small();
    void AnmEvent_CannotBuild_NoText();
    void Construct();
    void DisableTextForDeck();
    void ExecuteUbergraph_WBP_IngameMenuConstruction_ItemSlot(int32 EntryPoint);
};

#endif
