#ifndef UE4SS_SDK_BP_AISightResponsePreset_Citizen_HPP
#define UE4SS_SDK_BP_AISightResponsePreset_Citizen_HPP

class UBP_AISightResponsePreset_Citizen_C : public UPalAISightResponsePreset
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BlueprintDelegateSetup();
    void カスタムイベント_0(class APalCharacter* SelfCharacter, class APalCharacter* FoundCharacter);
    void ExecuteUbergraph_BP_AISightResponsePreset_Citizen(int32 EntryPoint);
};

#endif
