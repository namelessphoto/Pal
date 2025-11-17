#ifndef UE4SS_SDK_BP_ActionCommonWork_HPP
#define UE4SS_SDK_BP_ActionCommonWork_HPP

class UBP_ActionCommonWork_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName flagName;
    class UAkAudioEvent* AkEventPlayerCrafting;
    int32 PlayingID;

    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionCommonWork(int32 EntryPoint);
};

#endif
