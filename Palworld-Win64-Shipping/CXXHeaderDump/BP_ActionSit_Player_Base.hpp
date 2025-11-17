#ifndef UE4SS_SDK_BP_ActionSit_Player_Base_HPP
#define UE4SS_SDK_BP_ActionSit_Player_Base_HPP

class UBP_ActionSit_Player_Base_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName Flag Name;

    void DisableInteract(bool Disable);
    void ReleaseSit();
    void MoveCharacterToSit();
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionSit_Player_Base(int32 EntryPoint);
};

#endif
