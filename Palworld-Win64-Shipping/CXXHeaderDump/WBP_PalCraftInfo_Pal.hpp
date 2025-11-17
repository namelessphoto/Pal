#ifndef UE4SS_SDK_WBP_PalCraftInfo_Pal_HPP
#define UE4SS_SDK_WBP_PalCraftInfo_Pal_HPP

class UWBP_PalCraftInfo_Pal_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Num_HP_5;
    class UCanvasPanel* FixedAssignCanvas;
    class UProgressBar* Gauge_Hunger;
    class UImage* Image_80;
    class UBP_PalTextBlock_C* Text_NowSanity;
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot;
    class UMaterial* defaultFontMaterial;
    TSoftObjectPtr<UPalIndividualCharacterHandle> bindedHandle;
    float savedMaxSanity;
    float savedMaxHunger;

    void Clear();
    void UpdateHunger(float Current, float Last);
    void UpdateSanity(float nowSanity, float oldSanity);
    void BindEvent(class UPalIndividualCharacterParameter* paremter);
    void UnbindEvent();
    void SetTargetPal(class UPalIndividualCharacterSlot* TargetSlot, bool IsFixedAssign);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCraftInfo_Pal(int32 EntryPoint);
};

#endif
