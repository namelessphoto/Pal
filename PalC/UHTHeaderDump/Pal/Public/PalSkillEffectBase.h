#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESpawnActorCollisionHandlingMethod -FallbackName=ESpawnActorCollisionHandlingMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalNiagaraSoundStopInterface.h"
#include "SkillEffectSpawnParameter.h"
#include "SkillEffectTimeDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "PalSkillEffectBase.generated.h"

class APalCharacter;
class APalSkillEffectBase;
class UAkAudioEvent;
class UObject;
class UPalAttackFilter;
class UPalHitFilter;
class UPalSoundPlayer;

UCLASS()
class APalSkillEffectBase : public AActor, public IPalNiagaraSoundStopInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EffectSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPalAttackFilter* AttackFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPalHitFilter* HitFilterGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPalHitFilter* HitFilterCustomRange;
    
    UPROPERTY()
    AActor* AttackTarget;
    
private:
    UPROPERTY()
    FTimerHandle LifeTimeHandler;
    
    UPROPERTY()
    UPalSoundPlayer* SoundPlayer;
    
public:
    UPROPERTY(BlueprintReadOnly)
    FRandomStream RandomStream;
    
    APalSkillEffectBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAllNiagaraSound();
    
    UFUNCTION(BlueprintCallable)
    void StopAkSound();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FTimerHandle SetTimeCallbackBySkillEffectSpawnParameter(const UObject* WorldContextObject, const FSkillEffectSpawnParameter& Parameter, UObject* callObject, FSkillEffectTimeDelegate timeDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetActorTransformByOwner(const AActor* SkillOwner, const FVector& MyOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetActionTargetActor(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void PlayAkSound(UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialize();
    
private:
    UFUNCTION()
    void LifeTimeCallback();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSelfOwnerCharacterOrRaider(AActor* hitTarget);
    
    UFUNCTION(BlueprintPure)
    bool IsRidden();
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const AActor* SkillOwner, const FVector& MyOffset, AActor* Target, FRandomStream NewRandomStream);
    
    UFUNCTION(BlueprintPure)
    APalCharacter* GetOwnerCharacter() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetActionTargetLocation() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetActionTargetActor() const;
    
    UFUNCTION(BlueprintCallable)
    APalSkillEffectBase* CreateChildSkillEffect(TSubclassOf<APalSkillEffectBase> EffectClass, FTransform SpawnTransform, FRandomStream NewRandomStream, ESpawnActorCollisionHandlingMethod collisionMethod, AActor* ownerActor);
    

    // Fix for true pure virtual functions not being implemented
};

