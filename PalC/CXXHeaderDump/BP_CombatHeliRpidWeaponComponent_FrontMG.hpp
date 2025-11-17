#ifndef UE4SS_SDK_BP_CombatHeliRpidWeaponComponent_FrontMG_HPP
#define UE4SS_SDK_BP_CombatHeliRpidWeaponComponent_FrontMG_HPP

class UBP_CombatHeliRpidWeaponComponent_FrontMG_C : public UBP_CombatHeliRpidWeaponComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent_FrontMG(int32 EntryPoint);
};

#endif
