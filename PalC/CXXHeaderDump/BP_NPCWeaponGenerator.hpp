#ifndef UE4SS_SDK_BP_NPCWeaponGenerator_HPP
#define UE4SS_SDK_BP_NPCWeaponGenerator_HPP

class UBP_NPCWeaponGenerator_C : public UPalNPCWeaponGenerator
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnSpawnEvent(class APalWeaponBase* WeaponActor);
    void ExecuteUbergraph_BP_NPCWeaponGenerator(int32 EntryPoint);
};

#endif
