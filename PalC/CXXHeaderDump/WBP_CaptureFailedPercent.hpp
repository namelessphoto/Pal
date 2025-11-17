#ifndef UE4SS_SDK_WBP_CaptureFailedPercent_HPP
#define UE4SS_SDK_WBP_CaptureFailedPercent_HPP

class UWBP_CaptureFailedPercent_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_PercentNumDecimal;
    class UBP_PalTextBlock_C* Text_1;
    class UBP_PalTextBlock_C* Text_10;
    class UBP_PalTextBlock_C* Text_100;
    class UBP_PalTextBlock_C* text_Capturerate_SneakBonus;
    class UBP_PalTextBlock_C* Text_Deci_0;
    class UBP_PalTextBlock_C* Text_Deci_00;
    class UBP_PalTextBlock_C* Text_Pecent;
    FTimerHandle ClearSelfTimerHandle;
    FWBP_CaptureFailedPercent_COnOverClearTimer OnOverClearTimer;
    void OnOverClearTimer(class UWBP_CaptureFailedPercent_C* SelfWidget);
    double TargetDisplayPercent;
    double NowDisplayPercent;

    void UpdatePercent();
    void Set Percent(double Percent);
    void NotifyClearSelf();
    void Setup(double DisplayPercent);
    void Construct();
    void ExecuteUbergraph_WBP_CaptureFailedPercent(int32 EntryPoint);
    void OnOverClearTimer__DelegateSignature(class UWBP_CaptureFailedPercent_C* SelfWidget);
};

#endif
