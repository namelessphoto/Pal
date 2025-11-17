#ifndef UE4SS_SDK_WBP_CharaCre_ColorSelect_Free_HPP
#define UE4SS_SDK_WBP_CharaCre_ColorSelect_Free_HPP

class UWBP_CharaCre_ColorSelect_Free_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_CharaCre_ColorSelect_sq_C* WBP_CharaCre_ColorSelect_sq_Custom;
    class UWBP_ColorSlider_C* WBP_ColorSlider;
    class UMaterialInstanceDynamic* SGradientMaterial;
    class UMaterialInstanceDynamic* VGradientMaterial;
    FWBP_CharaCre_ColorSelect_Free_COnColorChanged OnColorChanged;
    void OnColorChanged(FLinearColor HSV);
    FWBP_CharaCre_ColorSelect_Free_COnNotifyCustomColorClicked OnNotifyCustomColorClicked;
    void OnNotifyCustomColorClicked();

    void Set Enable Slider(bool IsEnable);
    void SetColorForce(FLinearColor NewColor);
    void SetColor(FLinearColor NewColor);
    void ApplyColorSetting(bool IsTriggerEvent);
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_CharaCre_ColorSelect_Free_WBP_CharaCre_ColorSelect_sq_Custom_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget);
    void BndEvt__WBP_CharaCre_ColorSelect_Free_WBP_ColorSlider_K2Node_ComponentBoundEvent_4_OnColorChanged__DelegateSignature(FLinearColor HSV);
    void ExecuteUbergraph_WBP_CharaCre_ColorSelect_Free(int32 EntryPoint);
    void OnNotifyCustomColorClicked__DelegateSignature();
    void OnColorChanged__DelegateSignature(FLinearColor HSV);
};

#endif
