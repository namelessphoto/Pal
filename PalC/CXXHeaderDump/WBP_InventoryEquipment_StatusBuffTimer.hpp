#ifndef UE4SS_SDK_WBP_InventoryEquipment_StatusBuffTimer_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_StatusBuffTimer_HPP

class UWBP_InventoryEquipment_StatusBuffTimer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_Arrow_Buff;
    class UImage* Image_Arrow_Debuff;
    class UImage* Image_Base;
    class UImage* Image_Gauge;
    TMap<class EPalFoodStatusEffectType, class UTexture*> BuffIcons;
    TMap<class EPalFoodStatusEffectType, class UTexture*> DebuffIcons;
    FTimerHandle StatusTimerUpdateTimer;
    class UPalIndividualCharacterParameter* CurrentIndividualParam;
    TMap<class EPalFoodStatusEffectType, class UTexture2D*> BaseIcons;
    bool Is Regene;

    void SetFoodBuff(EPalFoodStatusEffectType BuffType, bool IsBuff, class UPalIndividualCharacterParameter* individualParam, bool IsRegene);
    void Destruct();
    void UpdateStatusTime();
    void ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer(int32 EntryPoint);
};

#endif
