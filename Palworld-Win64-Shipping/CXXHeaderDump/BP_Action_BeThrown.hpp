#ifndef UE4SS_SDK_BP_Action_BeThrown_HPP
#define UE4SS_SDK_BP_Action_BeThrown_HPP

class UBP_Action_BeThrown_C : public UPalAction_BeThrown
{
    FPointerToUberGraphFrame UberGraphFrame;

    void PlayThrownFX();
    void PlayThrownMontage();
    void ExecuteUbergraph_BP_Action_BeThrown(int32 EntryPoint);
};

#endif
