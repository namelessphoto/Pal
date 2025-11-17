#ifndef UE4SS_SDK_WBP_IngameDamageVinette_HPP
#define UE4SS_SDK_WBP_IngameDamageVinette_HPP

class UWBP_IngameDamageVinette_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Loop;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UImage* DamageVinette;
    class UImage* DamageVinette_1;

    void AnmEvent_Start();
    void AnmEvent_End();
    void ExecuteUbergraph_WBP_IngameDamageVinette(int32 EntryPoint);
};

#endif
