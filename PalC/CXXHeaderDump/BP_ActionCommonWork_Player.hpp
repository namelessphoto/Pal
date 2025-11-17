#ifndef UE4SS_SDK_BP_ActionCommonWork_Player_HPP
#define UE4SS_SDK_BP_ActionCommonWork_Player_HPP

class UBP_ActionCommonWork_Player_C : public UBP_ActionInteractBase_Player_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName flagName;
    class UAkAudioEvent* AkEventPlayerCrafting;
    int32 PlayingID;

    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionCommonWork_Player(int32 EntryPoint);
};

#endif
