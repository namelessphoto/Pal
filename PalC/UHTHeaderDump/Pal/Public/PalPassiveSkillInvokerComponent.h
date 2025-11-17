#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalInstanceID.h"
#include "PalPassiveSkillInvokerComponent.generated.h"

class APalCharacter;
class UPalPassiveSkillBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalPassiveSkillInvokerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleInstanceOnly)
    TArray<UPalPassiveSkillBase*> PassiveSkillList;
    
public:
    UPalPassiveSkillInvokerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnRideInactivated();
    
    UFUNCTION(BlueprintCallable)
    void OnRideActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerCharacterSpawned(FPalInstanceID ID);
    
private:
    UFUNCTION()
    void OnInitializedCharacter(APalCharacter* OwnerCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsWorker();
    
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsPartner();
    
    UFUNCTION(BlueprintCallable)
    void OnInactivatedAsOtomoHolder();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsWorker();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsPartner();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedAsOtomoHolder();
    
    UFUNCTION()
    void InitializedCharacterByFunnel();
    
};

