#ifndef UE4SS_SDK_WBP_Menu_PlayerGauge_Shield_HPP
#define UE4SS_SDK_WBP_Menu_PlayerGauge_Shield_HPP

class UWBP_Menu_PlayerGauge_Shield_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_HP;
    class UImage* Image_Line;
    class UProgressBar* ProgressBar_ShieldGauge;
    class UBP_PalTextBlock_C* Text_MaxSield;
    class UBP_PalTextBlock_C* Text_NowShield;
    FFixedPoint64 CachedShieldHP;

    void UpdateShieldMaxHP(FFixedPoint64 nowShieldMaxHP);
    void UpdateShield(FFixedPoint64 nowShieldMaxHP, FFixedPoint64 nowShieldHP);
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_Menu_PlayerGauge_Shield(int32 EntryPoint);
};

#endif
