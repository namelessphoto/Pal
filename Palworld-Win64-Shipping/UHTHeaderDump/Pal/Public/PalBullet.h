#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "BulletHoleDecalInfo.h"
#include "EPalDamageAnimationReactionType.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalPlayerDamageCameraShakeCategory.h"
#include "PalObjectPoolable.h"
#include "PalPassiveSkillEffect.h"
#include "PalBullet.generated.h"

class APalCharacter;
class UBoxComponent;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class USphereComponent;

UCLASS()
class APalBullet : public AActor, public IPalObjectPoolable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDestroyBulletDelegate, UPrimitiveComponent*, HitComp, AActor*, OtherCharacter, UPrimitiveComponent*, OtherComp, const FHitResult&, Hi);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FDestroyBulletDelegate OnDestroyDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleDefaultsOnly)
    USphereComponent* CollisionComp;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleDefaultsOnly)
    UProjectileMovementComponent* ProjectileMovement;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPlayerDamageCameraShakeCategory PlayerDamageCameraShake;
    
private:
    UPROPERTY(EditDefaultsOnly)
    bool bIsHitFriend;
    
    UPROPERTY(Transient)
    int32 WeaponDamage;
    
    UPROPERTY(Transient)
    float PvPWeaponDamageRate;
    
    UPROPERTY(Transient)
    FTimerHandle Handle;
    
    UPROPERTY(Transient)
    bool isDamageable;
    
    UPROPERTY(Transient)
    bool AISoundEmitable;
    
    UPROPERTY(Transient)
    float SneakAttackRate;
    
    UPROPERTY(Transient)
    float DeleteTime;
    
    UPROPERTY(Transient)
    float DamageDecayStartRate;
    
    UPROPERTY(Transient)
    float LifeTimer;
    
    UPROPERTY(Transient)
    FName OwnerStaticItemId;
    
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    EPalDamageAnimationReactionType weaponBulletDamageReactionType;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FPalPassiveSkillEffect> skillEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<TEnumAsByte<EPhysicalSurface>, FBulletHoleDecalInfo> BulletHoleDecalsMap;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FBulletHoleDecalInfo DefaultBulletHoleDecals;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bUsePool;
    
    APalBullet(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWeaponDamage(int32 Damage);
    
    UFUNCTION(BlueprintCallable)
    void SetSneakAttackRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillEffectList(const TArray<FPalPassiveSkillEffect>& inList);
    
    UFUNCTION(BlueprintCallable)
    void SetPvPWeaponDamageRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerStaticItemId(const FName& ItemId);
    
    UFUNCTION(BlueprintCallable)
    void SetDeleteTime(float DeleteSecound, float DecayStartRate);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageable(bool damageable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetBulletHoleDecal(const FHitResult& Hit, float LifeSpan, float FadeTime, float fadeScreenSize);
    
    UFUNCTION(BlueprintCallable)
    void RegisterIgnoreActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCannotHitAreaBox(UBoxComponent* BoxComp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitToPalEnemy(UPrimitiveComponent* HitComp, APalCharacter* OtherCharacter, UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitToPalCharacter(UPrimitiveComponent* HitComp, APalCharacter* OtherCharacter, UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitToActor(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestroy(UPrimitiveComponent* HitComp, AActor* OtherCharacter, UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlock(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDestroy(UPrimitiveComponent* HitComp, AActor* OtherCharacter, UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    
    UFUNCTION(BlueprintPure)
    int32 GetWeaponDamage() const;
    
    UFUNCTION(BlueprintPure)
    float GetSneakAttackRate();
    
    UFUNCTION(BlueprintPure)
    float GetPvPWeaponDamageRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetParameterWithPassiveSkillEffect(float originalValue, EPalPassiveSkillEffectType EffectType) const;
    
    UFUNCTION(BlueprintPure)
    FName GetOwnerStaticItemId() const;
    
    UFUNCTION(BlueprintPure)
    float GetDecayDamageRate();
    

    // Fix for true pure virtual functions not being implemented
};

