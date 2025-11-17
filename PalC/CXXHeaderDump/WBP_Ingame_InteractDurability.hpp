#ifndef UE4SS_SDK_WBP_Ingame_InteractDurability_HPP
#define UE4SS_SDK_WBP_Ingame_InteractDurability_HPP

class UWBP_Ingame_InteractDurability_C : public UPalUIMapObjectHPWorldHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Color_NormalToLittle;
    class UProgressBar* ProgressBar_HP;
    class UBP_PalTextBlock_C* Text_HP_Current;
    class UBP_PalTextBlock_C* Text_HP_MAX;
    bool DamegeReacted;
    double CurrentHP;
    class UPalMapObjectModel* Model;

    void UpdateHP_Internal(double CurrentHP, double MaxHP);
    void OnSetup();
    void ShowHP(class APalMapObject* MapObject, EPalHUDDisplayType DisplayType);
    void UpdateHP(class UPalMapObjectModel* Model);
    void CollapsePanel();
    void OnCannonHPUpdate(float CurrentHP, float MaxHP);
    void ExecuteUbergraph_WBP_Ingame_InteractDurability(int32 EntryPoint);
};

#endif
