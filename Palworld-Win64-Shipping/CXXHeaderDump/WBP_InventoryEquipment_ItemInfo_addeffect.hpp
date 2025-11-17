#ifndef UE4SS_SDK_WBP_InventoryEquipment_ItemInfo_addeffect_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_ItemInfo_addeffect_HPP

class UWBP_InventoryEquipment_ItemInfo_addeffect_C : public UUserWidget
{
    class UCanvasPanel* CanvasPanelAddEff;
    class UCanvasPanel* CanvasPanelGun;
    class UImage* Frame;
    class UImage* Frame_1;
    class UImage* Rank;
    class UBP_PalTextBlock_C* Text_ImportantDesc;
    class UBP_PalTextBlock_C* Text_SimpleDesc;

    void SetImportantDescription(FText Text);
    void SetSimpleDescription(FText Text);
};

#endif
