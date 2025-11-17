#ifndef UE4SS_SDK_BP_ThrowPalWeapon_HPP
#define UE4SS_SDK_BP_ThrowPalWeapon_HPP

class ABP_ThrowPalWeapon_C : public ABP_ThrowWeaponBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SK_Weapon_PalSphere_001;
    bool IsPlayedThrowMotion;
    double Const_WalkSpeedRate;

    bool IsEmptyMagazine();
    void Set Flags(bool Disable, double Speed);
    void On Throw();
    void IsNotEmptyOtomo(bool& NotEmpty);
    FName GetEquipSocketName();
    void GetThrowObjectClass(TSubclassOf<class AActor>& ThrowObject);
    void OnAttachWeapon(class AActor* attachActor);
    void OnDetachWeapon(class AActor* detachActor);
    void ExecuteUbergraph_BP_ThrowPalWeapon(int32 EntryPoint);
};

#endif
