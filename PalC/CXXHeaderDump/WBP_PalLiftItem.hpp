#ifndef UE4SS_SDK_WBP_PalLiftItem_HPP
#define UE4SS_SDK_WBP_PalLiftItem_HPP

class UWBP_PalLiftItem_C : public UPalUserWidget
{
    class UWidgetAnimation* FailedOpShake;
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot;
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton;
    class UPalUILiftSlotModel* Model;

    void ShowSetup();
    void OnUpdateHandleSlot(class UPalIndividualCharacterSlot* TargetHandleSlot);
    bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnFailedItemOperation();
    void OnUpdateCount(int32 Count);
    void On Update Icon Texture Path(TSoftObjectPtr<UTexture2D> IconTexture);
    void Dispose();
    void Setup(class UPalUILiftSlotModel* Model);
};

#endif
