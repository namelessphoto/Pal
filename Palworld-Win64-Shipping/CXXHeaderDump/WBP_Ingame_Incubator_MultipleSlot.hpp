#ifndef UE4SS_SDK_WBP_Ingame_Incubator_MultipleSlot_HPP
#define UE4SS_SDK_WBP_Ingame_Incubator_MultipleSlot_HPP

class UWBP_Ingame_Incubator_MultipleSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Complete;
    class UImage* CircleGauge_Complete;
    class UImage* CircleGauge_Progress;
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;
    class UPalWorkProgress* Work Progress;
    class UPalItemSlot* TargetSlot;

    void On Update Work Amount(class UPalWorkProgress* WorkProgress);
    void SetSlot(class UPalItemSlot* Slot);
    void UpdateSlotProgress(class UPalWorkProgress* Work Progress);
    void Unbind();
    void ExecuteUbergraph_WBP_Ingame_Incubator_MultipleSlot(int32 EntryPoint);
};

#endif
