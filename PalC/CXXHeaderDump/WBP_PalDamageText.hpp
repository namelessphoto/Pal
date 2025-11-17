#ifndef UE4SS_SDK_WBP_PalDamageText_HPP
#define UE4SS_SDK_WBP_PalDamageText_HPP

class UWBP_PalDamageText_C : public UPalUIDamageTextBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Out;
    class UWidgetAnimation* In_Resist_0;
    class UWidgetAnimation* In_Weak_1;
    class UWidgetAnimation* In_Weak_0;
    class UWidgetAnimation* In;
    class UImage* Image_CriticalEff;
    class UOverlay* Overlay_5;
    class UBP_PalTextBlock_C* Text_DamageValue;
    int32 totalDamage;
    double animeSpeedScale;
    EPalDamageTextType textType;
    double interpolationLength;
    FVector2D OffsetPosition;
    FVector2D randomizeOffset;

    void GetPadding(double& Padding);
    void SetDamageTextType(EPalDamageTextType textType);
    void UpdatePosition(const FVector& targetWorldLocation);
    void SetDamageColor(const FSlateColor& inColor);
    void SetDamageValue(int32 InValue);
    void Finished_450E32A44BB84A7C14A5248BD3F03F85();
    void OnRequestClose();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalDamageText(int32 EntryPoint);
};

#endif
