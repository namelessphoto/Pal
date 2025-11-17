#ifndef UE4SS_SDK_WBP_IngameFlyEff_HPP
#define UE4SS_SDK_WBP_IngameFlyEff_HPP

class UWBP_IngameFlyEff_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Fade;
    class UImage* Image;
    class UImage* Image_38;
    bool Enabled;
    class APalCharacter* Character;
    FTimerHandle UpdateEffTimer;
    bool Visible;
    double CachedVelocity;

    void EnableEff(bool IsEnable, class APalCharacter* Character);
    void UpdateEff();
    void ExecuteUbergraph_WBP_IngameFlyEff(int32 EntryPoint);
};

#endif
