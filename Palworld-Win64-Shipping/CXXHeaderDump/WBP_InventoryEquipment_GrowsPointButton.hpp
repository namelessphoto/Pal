#ifndef UE4SS_SDK_WBP_InventoryEquipment_GrowsPointButton_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_GrowsPointButton_HPP

class UWBP_InventoryEquipment_GrowsPointButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Blink;
    class UWidgetAnimation* Anm_EnableToDisable;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UImage* Flare;
    class UImage* Image_214;
    class UBP_PalTextBlock_C* Text_Point;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;
    bool isEnableButton;

    void SetSimulatePoint(int32 Point);
    void SetPoint(int32 Point);
    void AnmEvent_Active();
    void AnmEvent_Deactive();
    void ExecuteUbergraph_WBP_InventoryEquipment_GrowsPointButton(int32 EntryPoint);
};

#endif
