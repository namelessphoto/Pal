#ifndef UE4SS_SDK_BP_ActionPlanting_Player_HPP
#define UE4SS_SDK_BP_ActionPlanting_Player_HPP

class UBP_ActionPlanting_Player_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName flagName;

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionPlanting_Player(int32 EntryPoint);
};

#endif
