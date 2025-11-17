#ifndef UE4SS_SDK_BP_ActionDigOut_HPP
#define UE4SS_SDK_BP_ActionDigOut_HPP

class UBP_ActionDigOut_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName flagName;
    class UAkAudioEvent* AkEventPlayerCrafting;

    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionDigOut(int32 EntryPoint);
};

#endif
