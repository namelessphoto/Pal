#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalCannonDamageReactionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalCannonDamageReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCannonHPUpdateDelegate, float, CurrentHP, float, MaxHP);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCannonDeadDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FOnCannonDeadDelegate OnCannonDeadDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnCannonHPUpdateDelegate OnCannonHPUpdateDelegate;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float MaxHP;
    
    UPROPERTY(EditDefaultsOnly)
    float Defense;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_UpdateHP)
    float Hp;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid HPHUDId;
    
public:
    UPalCannonDamageReactionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void PrintOnRepHP_BP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PrintCreateHPHUD_BP();
    
private:
    UFUNCTION()
    void OnRep_UpdateHP();
    
    UFUNCTION()
    void CreateHPHUD();
    
};

