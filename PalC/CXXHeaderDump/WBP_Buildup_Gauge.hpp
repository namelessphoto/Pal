#ifndef UE4SS_SDK_WBP_Buildup_Gauge_HPP
#define UE4SS_SDK_WBP_Buildup_Gauge_HPP

class UWBP_Buildup_Gauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Fill;
    class UImage* Select;

    void SetFill(bool IsFill);
    void SetSelect();
    void ExecuteUbergraph_WBP_Buildup_Gauge(int32 EntryPoint);
};

#endif
