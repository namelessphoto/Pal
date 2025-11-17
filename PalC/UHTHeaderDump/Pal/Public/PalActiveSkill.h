#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalWazaID.h"
#include "PalActiveSkill.generated.h"

class AActor;
class UPalWazaBulletEmiiterOverlapBase;

UCLASS(BlueprintType)
class UPalActiveSkill : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCoolTimeUpdateDelegate, float, CoolRate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCoolStateChange);
    
    UPROPERTY(BlueprintAssignable)
    FOnCoolTimeUpdateDelegate OnCoolTimeUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FOnCoolStateChange OnCoolStart;
    
    UPROPERTY(BlueprintAssignable)
    FOnCoolStateChange OnCoolFinish;
    
    UPROPERTY(ReplicatedUsing=OnRep_ChangeCTState)
    bool IsCooling;
    
    UPROPERTY(ReplicatedUsing=OnRep_UpdateCoolTime)
    float ReuseCoolTimer;
    
private:
    UPROPERTY(Transient)
    EPalWazaID WazaType;
    
    UPROPERTY(Transient)
    bool IsIgnoreRaycast;
    
    UPROPERTY(Transient)
    bool IsStopTimer;
    
    UPROPERTY(Transient)
    float DatabaseCoolTime;
    
    UPROPERTY(Transient)
    float NextCoolTime;
    
    UPROPERTY(Transient)
    bool bIsTransient;
    
    UPROPERTY(Transient)
    UPalWazaBulletEmiiterOverlapBase* BulletEmiiterOverlap;
    
public:
    UPalActiveSkill();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_UpdateCoolTime();
    
    UFUNCTION()
    void OnRep_ChangeCTState();
    
    UFUNCTION(BlueprintPure)
    bool IsCoolTimeFinish() const;
    
    UFUNCTION(BlueprintPure)
    bool IsConditionSatisfy(AActor* SelfActor) const;
    
};

