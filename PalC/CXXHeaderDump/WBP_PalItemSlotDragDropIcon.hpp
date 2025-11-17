#ifndef UE4SS_SDK_WBP_PalItemSlotDragDropIcon_HPP
#define UE4SS_SDK_WBP_PalItemSlotDragDropIcon_HPP

class UWBP_PalItemSlotDragDropIcon_C : public UPalUserWidget
{
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton;

    void Setup(FName StaticItemId, int32 DisplayNum);
};

#endif
