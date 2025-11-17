#ifndef UE4SS_SDK_WBP_IngameBossHP_HPP
#define UE4SS_SDK_WBP_IngameBossHP_HPP

class UWBP_IngameBossHP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_BossDefeat;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UProgressBar* BossGaugeHP;
    class UProgressBar* BossGaugeHP_Back;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Num_HP_00;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Num_HP_01;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Prefix;
    class UBP_PalTextBlock_C* BPPalTextBlock_ATK;
    class UBP_PalTextBlock_C* BPPalTextBlock_DEF;
    class UBP_PalTextBlock_C* BPPalTextBlock_HP;
    class UCanvasPanel* Canvas_PalCommonDetail;
    class UCanvasPanel* CanvasPanel_Prefix;
    class UImage* NameDeco_Image_L;
    class UImage* NameDeco_Image_R;
    class UOverlay* Overlay_Potencial;
    class USizeBox* SizeBox_Overall;
    class UBP_PalTextBlock_C* Text_BossName;
    class UBP_PalTextBlock_C* Text_LvTitle;
    class UBP_PalTextBlock_C* Text_LvValue;
    class UWBP_PalElementIcon_C* WBP_PalElementIcon_Double_00;
    class UWBP_PalElementIcon_C* WBP_PalElementIcon_Double_01;
    class UWBP_PalElementIcon_C* WBP_PalElementIcon_Single;
    class UPalUIDelayGaugeCalculator* DelayGauge;
    bool TalentDisplay;
    TEnumAsByte<ENum_BossGaugeDisplayMode> DisplayMode;

    void SetBossGaugeDisplayMode(TEnumAsByte<ENum_BossGaugeDisplayMode> IsShortMode);
    void Set Enable Talent Detail(bool IsEnable, class UPalIndividualCharacterParameter* Parameter);
    void SetLevelVisibility(bool Visible);
    void SetElement(EPalElementType type1, EPalElementType type2);
    void SetLevel(int32 Level);
    void SetBossPrefix(FText Text);
    void SetHP(int32 nowHP, int32 MaxHP);
    void SetBossName(FText InText);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameBossHP(int32 EntryPoint);
};

#endif
