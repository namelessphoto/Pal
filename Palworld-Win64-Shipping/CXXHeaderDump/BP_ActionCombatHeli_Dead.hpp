#ifndef UE4SS_SDK_BP_ActionCombatHeli_Dead_HPP
#define UE4SS_SDK_BP_ActionCombatHeli_Dead_HPP

class UBP_ActionCombatHeli_Dead_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionCombatHeli_Dead(int32 EntryPoint);
};

#endif
