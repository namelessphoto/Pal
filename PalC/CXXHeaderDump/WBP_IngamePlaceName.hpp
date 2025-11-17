#ifndef UE4SS_SDK_WBP_IngamePlaceName_HPP
#define UE4SS_SDK_WBP_IngamePlaceName_HPP

class UWBP_IngamePlaceName_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Exp_Close;
    class UWidgetAnimation* Anm_Exp_Open;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UImage* Base;
    class UImage* BaseLineC;
    class UImage* BaseLineC_1;
    class UImage* BaseLineL;
    class UImage* BaseLineL_1;
    class UImage* BaseLineR;
    class UImage* BaseLineR_1;
    class UCanvasPanel* Canvas_Exp;
    class UImage* Flare;
    class UImage* Image_Base;
    class UImage* Image_Base_1;
    class UBP_PalTextBlock_C* Text_AddExp;
    class UBP_PalTextBlock_C* Text_RegionName;
    FTimerHandle RegionNameCloseTimer;
    FName CachedRegionNameID;
    FTimerHandle DelayCloseExpTimer;

    void OnCloseTimerEnd();
    void Display Region(FName RegionNameID);
    void AnmEvent_Start();
    void AnmEvent_End();
    void DelayClose_Exp();
    void Construct();
    void ExecuteUbergraph_WBP_IngamePlaceName(int32 EntryPoint);
};

#endif
