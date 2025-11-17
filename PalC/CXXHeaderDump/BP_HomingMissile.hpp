#ifndef UE4SS_SDK_BP_HomingMissile_HPP
#define UE4SS_SDK_BP_HomingMissile_HPP

class ABP_HomingMissile_C : public ABP_AttackBulletBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    class UStaticMeshComponent* SM_MissileExhaust;
    class UStaticMeshComponent* SM_Missile;
    bool IsExprosed;
    double HomingStartRandimTimeMin;
    double HpmingAccele;

    void FindBulletOwner(class AActor*& Owner);
    void OnHitToActor(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void GetExplosionClass(TSubclassOf<class ABP_ExplosionAttackBase_C>& ExplosionClass);
    void GetBulletAttackType(EPalAttackType& AttackType);
    void SetAttackTarget(class APalCharacter* Target);
    void ReceiveBeginPlay();
    void OnDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ExecuteUbergraph_BP_HomingMissile(int32 EntryPoint);
};

#endif
