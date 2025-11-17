#ifndef UE4SS_SDK_WBP_StatusBuffTimerContainer_HPP
#define UE4SS_SDK_WBP_StatusBuffTimerContainer_HPP

class UWBP_StatusBuffTimerContainer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox;
    TMap<EPalFoodStatusEffectType, int32> Effects;

    void UpdateCharacterBuff(class UPalIndividualCharacterParameter* individualParam);
    void ExecuteUbergraph_WBP_StatusBuffTimerContainer(int32 EntryPoint);
};

#endif
