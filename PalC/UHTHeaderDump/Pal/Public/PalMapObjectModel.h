#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EPalInteractiveObjectIndicatorType.h"
#include "EPalMapObjectDamagableType.h"
#include "EPalMapObjectInteractRestrictType.h"
#include "FlagContainer.h"
#include "GameDateTime.h"
#include "MapObjectModelDelegateDelegate.h"
#include "MapObjectModelDisposeDelegateDelegate.h"
#include "PalBoundsTransform.h"
#include "PalInstanceID.h"
#include "PalMapObjectDamageDelegateDelegate.h"
#include "PalMapObjectDamageWithLastDelegateDelegate.h"
#include "PalMapObjectModelInterface.h"
#include "PalMapObjectStatusValue.h"
#include "PalStageInstanceId.h"
#include "PalMapObjectModel.generated.h"

class AActor;
class UPalBuildProcess;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectModelConnectorBase;
class UPalMapObjectModelEffect;
class UPalWorkAssign;
class UPalWorkBase;

UCLASS(BlueprintType)
class UPalMapObjectModel : public UObject, public IPalMapObjectModelInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPalMapObjectDamageWithLastDelegate OnDamageInServerDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPalMapObjectDamageDelegate OnDamageDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FMapObjectModelDelegate OnUpdateHP;
    
    UPROPERTY(BlueprintAssignable)
    FMapObjectModelDelegate OnDestroyDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FMapObjectModelDisposeDelegate OnDisposeDelegateInServer;
    
    UPROPERTY(BlueprintAssignable)
    FMapObjectModelDelegate OnUpdatedEnableTickDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FMapObjectModelDelegate OnUpdateBaseCampIdBelongToInServerDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FMapObjectModelDelegate OnUpdateGroupIdBelongToInServerDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FMapObjectModelDelegate OnRepBuildPlayerUIdDelegate_Client;
    
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid InstanceId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FName MapObjectMasterDataId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalBoundsTransform WorkableBounds;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FBox MeshBoxBounds;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid ConcreteModelInstanceId;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_ConcreteModel)
    UPalMapObjectConcreteModelBase* ConcreteModel;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid BaseCampIdBelongTo;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid GroupIdBelongTo;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FName BuildObjectId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    UPalBuildProcess* BuildProcess;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalMapObjectDamagableType DamagableType;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalMapObjectStatusValue Hp;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FTransform InitialTransformCache;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    UPalMapObjectModelConnectorBase* Connector;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_Effect)
    UPalMapObjectModelEffect* Effect;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid RepairWorkId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid OwnerSpawnerLevelObjectInstanceId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid OwnerInstanceId;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_BuildPlayerUId)
    FGuid BuildPlayerUId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bInDoor;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalMapObjectInteractRestrictType InteractRestrictType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGameDateTime CreatedAt;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FString CreatedAtStr;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float SignificanceValue;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float DeteriorationDamage;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float DeteriorationTotalDamage;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bIgnoredSave;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bIgnoredSaveWhenNotDamaged;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid DungeonInstanceIdBelongTo;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalStageInstanceId StageInstanceIdBelongTo;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer TickFlagContainer;
    
public:
    UPalMapObjectModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void RequestRepairByPlayer_ToServer_ServerInternal(const FGuid& RequestPlayerUId);
    
private:
    UFUNCTION()
    void OnUpdateBuildProcess_ServerInternal(UPalBuildProcess* TargetBuildProcess);
    
    UFUNCTION()
    void OnUnassignWorkRepairBuildObject(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION()
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION()
    void OnTriggeringInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType, float DeltaTime);
    
    UFUNCTION()
    void OnStartTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION()
    void OnRep_Effect();
    
    UFUNCTION()
    void OnRep_ConcreteModel();
    
    UFUNCTION()
    void OnRep_BuildPlayerUId();
    
    UFUNCTION()
    void OnEndTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION()
    void OnAssignWorkRepairBuildObject(UPalWorkBase* Work, UPalWorkAssign* WorkAssign);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsDamaged() const;
    
    UFUNCTION(BlueprintPure)
    FPalMapObjectStatusValue GetHP() const;
    
    UFUNCTION(BlueprintPure)
    UPalMapObjectConcreteModelBase* GetConcreteModel(const bool bIsForce) const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FGuid GetModelId() const override PURE_VIRTUAL(GetModelId, return FGuid{};);
    
};

