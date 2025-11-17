#ifndef UE4SS_SDK_BP_ActionWatering_Player_HPP
#define UE4SS_SDK_BP_ActionWatering_Player_HPP

class UBP_ActionWatering_Player_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName flagName;

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionWatering_Player(int32 EntryPoint);
};

#endif
