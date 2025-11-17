#ifndef UE4SS_SDK_BP_ThrowWeapon_Dummy_HPP
#define UE4SS_SDK_BP_ThrowWeapon_Dummy_HPP

class ABP_ThrowWeapon_Dummy_C : public ABP_ThrowWeaponBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ExecuteUbergraph_BP_ThrowWeapon_Dummy(int32 EntryPoint);
};

#endif
