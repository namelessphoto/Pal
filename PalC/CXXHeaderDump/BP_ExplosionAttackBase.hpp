#ifndef UE4SS_SDK_BP_ExplosionAttackBase_HPP
#define UE4SS_SDK_BP_ExplosionAttackBase_HPP

class ABP_ExplosionAttackBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    double HitCollisionTime;
    class UPalHitFilter* HitFilter;
    int32 AttackPower;
    double BlowPower;
    double SneakAttackRate;
    TSubclassOf<class UPalCameraShakeBase> CameraShakeClass;
    bool IsBlow;
    TArray<FPalSpecialAttackRateInfo> Special Attack Rate Infos;
    double PvPRate;
    bool MuteSoundForAI;
    FName OwnerStaticItemId;

    void SetSpecialAttackInfos(TArray<FPalSpecialAttackRateInfo>& NewParam);
    void Can Damage by Ray Check(class UPrimitiveComponent* OtherHitCollision, bool& CanDamage);
    void Is Attack Able(class AActor* Attacker, class AActor* HitActor, class UPrimitiveComponent* HitComponent, bool& IsHit);
    void Get Attackable Friend(bool& IsFriendAttack);
    void GetEffectValue(int32& Value);
    void GetEffectType(EPalAdditionalEffectType& Effect);
    void GetElement(EPalElementType& Element);
    void FindAttacker(class AActor*& Attacker);
    void GetWeaponAttackType(EPalAttackType& AttackType);
    void SetBlowPower(double NewBlowPower);
    void SetRadius(int32 NewParam);
    void SetPower(int32 NewParam, double SnakeRate, double PvPDamageRate);
    void OnHit(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    void ReceiveBeginPlay();
    void DisableCollision();
    void SetupHitFilter();
    void SetOwnerStaticItemId(FName OwnerStaticItemId);
    void ExecuteUbergraph_BP_ExplosionAttackBase(int32 EntryPoint);
};

#endif
