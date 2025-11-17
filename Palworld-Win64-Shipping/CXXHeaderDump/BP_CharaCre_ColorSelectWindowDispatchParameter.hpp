#ifndef UE4SS_SDK_BP_CharaCre_ColorSelectWindowDispatchParameter_HPP
#define UE4SS_SDK_BP_CharaCre_ColorSelectWindowDispatchParameter_HPP

class UBP_CharaCre_ColorSelectWindowDispatchParameter_C : public UPalHUDDispatchParameterBase
{
    FLinearColor SelectedColor;
    TArray<FLinearColor> PresetColorArray;
    FLinearColor DefaultColor;
    FBP_CharaCre_ColorSelectWindowDispatchParameter_COnChangedColor OnChangedColor;
    void OnChangedColor(FLinearColor Color);
    class UWidget* RelativePositionWidget;

    void OnChangedColor__DelegateSignature(FLinearColor Color);
};

#endif
