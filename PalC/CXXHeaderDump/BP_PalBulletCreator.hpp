#ifndef UE4SS_SDK_BP_PalBulletCreator_HPP
#define UE4SS_SDK_BP_PalBulletCreator_HPP

class UBP_PalBulletCreator_C : public UPalBulletCreator
{
    TMap<class EPalPassiveSkillEffectType, class TSubclassOf<UPalBulletModifierComponent>> ModifierMap;

    class APalBullet* CreateBullet(const class UObject* WorldContextObject, class APalWeaponBase* Weapon, TSubclassOf<class APalBullet> BulletClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, class AActor* Owner, class APawn* Instigator);
};

#endif
