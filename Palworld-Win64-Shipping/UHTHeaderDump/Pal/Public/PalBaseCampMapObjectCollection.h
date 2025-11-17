#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalStatusID.h"
#include "PalFastBaseCampMapObjectRepInfoArray.h"
#include "PalMapObjectDisposeOptions.h"
#include "PalBaseCampMapObjectCollection.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalMapObjectModel;
class UPalMapObjectModelEffectBase;
class UPalMapObjectModelEffect_AccumulateTrigger;

UCLASS()
class UPalBaseCampMapObjectCollection : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapObjectInstanceDelegate, UPalMapObjectModel*, Model);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapObjectConcreteModelDelegate, UPalMapObjectConcreteModelBase*, Model);
    
private:
    UPROPERTY()
    TArray<FGuid> BurningMapObjectInstanceIds;
    
public:
    UPROPERTY(BlueprintAssignable)
    FMapObjectInstanceDelegate OnRegisteredMapObjectInstance;
    
    UPROPERTY(BlueprintAssignable)
    FMapObjectConcreteModelDelegate OnAvailableConcreteModelDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FMapObjectConcreteModelDelegate OnNotAvailableConcreteModelDelegate;
    
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalFastBaseCampMapObjectRepInfoArray MapObjectInstanceIdRepInfoArray;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FGuid> DropItemConcreteModelInstanceIds;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FGuid> DefenseAttackModelInstanceIds;
    
public:
    UPalBaseCampMapObjectCollection();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnTriggeredBurnAnyMapObject(UPalMapObjectModelEffect_AccumulateTrigger* Self, UPalMapObjectModel* OwnerModel);
    
    UFUNCTION()
    void OnRemovedEffectAnyMapObject(UPalMapObjectModel* OwnerModel, UPalMapObjectModelEffectBase* Effect, EPalStatusID statusID);
    
private:
    UFUNCTION()
    void OnNotAvailableConcreteModel_ServerInternal(UPalMapObjectConcreteModelBase* Model);
    
protected:
    UFUNCTION()
    void OnGrantedEffectAnyMapObject(UPalMapObjectModel* OwnerModel, UPalMapObjectModelEffectBase* Effect);
    
private:
    UFUNCTION()
    void OnDisposeMapObject(UPalMapObjectModel* Model, const FPalMapObjectDisposeOptions& Options);
    
    UFUNCTION()
    void OnAvailableConcreteModel_ServerInternal(UPalMapObjectConcreteModelBase* Model);
    
};

