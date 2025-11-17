#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EPalMapObjectItemCollectableType.h"
#include "GameDateTime.h"
#include "PalBaseCampAssignableObjectInterface.h"
#include "PalBaseCampModuleResourceCollectorTargetInterface.h"
#include "PalFoliageInstanceId.h"
#include "PalFoliageInstanceTransform.h"
#include "PalMapObjectItemCollectableInterface.h"
#include "PalMapObjectModelInterface.h"
#include "PalFoliageInstance.generated.h"

class UPalFoliageInstance;

UCLASS()
class UPalFoliageInstance : public UObject, public IPalMapObjectModelInterface, public IPalMapObjectItemCollectableInterface, public IPalBaseCampAssignableObjectInterface, public IPalBaseCampModuleResourceCollectorTargetInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFoliageInstanceDelegate, UPalFoliageInstance*, Instance);
    
    UPROPERTY()
    TMap<int32, bool> DirtyMap;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalFoliageInstanceId InstanceId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FName FoliageTypeId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    int32 Hp;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_Alive)
    bool bAlive;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_WorldTransform)
    FPalFoliageInstanceTransform WorldTransform;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FTransform WorldTransformCache;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGameDateTime RespawnTimeAt;
    
public:
    UPalFoliageInstance();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_WorldTransform();
    
    UFUNCTION()
    void OnRep_Alive(bool bOldValue);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    FGuid GetModelId() const override PURE_VIRTUAL(GetModelId, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    EPalMapObjectItemCollectableType GetItemCollectableType() const override PURE_VIRTUAL(GetItemCollectableType, return EPalMapObjectItemCollectableType::Pickup;);
    
};

