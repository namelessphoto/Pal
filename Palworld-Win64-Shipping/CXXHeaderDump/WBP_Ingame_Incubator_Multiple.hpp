#ifndef UE4SS_SDK_WBP_Ingame_Incubator_Multiple_HPP
#define UE4SS_SDK_WBP_Ingame_Incubator_Multiple_HPP

class UWBP_Ingame_Incubator_Multiple_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_DetailToSimple;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_NoSet;
    class UImage* LineCenter;
    class UOverlay* OverlayStatus;
    class UBP_PalTextBlock_C* Text_Status;
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot;
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_1;
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_2;
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_3;
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_4;
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_5;
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_6;
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_7;
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_8;
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_9;
    class UWBP_Ingame_Incubator_MultipleSlot_C* WBP_Ingame_Incubator_MultipleSlot_Simple;
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;
    class UPalMapObjectMultiHatchingEggModel* Model;
    bool isDisplayedDetail;
    FTimerHandle DisplayCheckTimer;
    TArray<class UWBP_Ingame_Incubator_MultipleSlot_C*> Slots;
    int32 LastSimpleSlotIndex;
    FTimerHandle SimpleSlotUpdateTimer;
    bool NoEgg;
    bool HasPower;

    void OnEggArrayUpdated();
    void UpdateSimpleSlot();
    void Update Power Suffcient(class UPalMapObjectEnergyModule* Module);
    void Update Slots(class UPalItemContainer* ItemContainer);
    void Setup();
    void OnSetup();
    void Destruct();
    void Construct();
    void DisplayCheck();
    void OnInitialized();
    void ExecuteUbergraph_WBP_Ingame_Incubator_Multiple(int32 EntryPoint);
};

#endif
