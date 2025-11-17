#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EGeometryCollectionPhysicsTypeEnum -FallbackName=EGeometryCollectionPhysicsTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EInitialVelocityTypeEnum -FallbackName=EInitialVelocityTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EObjectStateTypeEnum -FallbackName=EObjectStateTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=ChaosNotifyHandlerInterface -FallbackName=ChaosNotifyHandlerInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=ChaosPhysicsCollisionInfo -FallbackName=ChaosPhysicsCollisionInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=EClusterConnectionTypeEnum -FallbackName=EClusterConnectionTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=OnChaosPhysicsCollision__DelegateSignature -FallbackName=OnChaosPhysicsCollisionDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "GeomComponentCacheParameters.h"
#include "GeometryCollectionDamagePropagationData.h"
#include "GeometryCollectionRepData.h"
#include "OnChaosBreakEventDelegate.h"
#include "OnChaosCrumblingEventDelegate.h"
#include "OnChaosRemovalEventDelegate.h"
#include "GeometryCollectionComponent.generated.h"

class AChaosSolverActor;
class AFieldSystemActor;
class AGeometryCollectionISMPoolActor;
class UBodySetup;
class UChaosPhysicalMaterial;
class UFieldNodeBase;
class UFieldSystemMetaData;
class UGeometryCollection;
class UGeometryCollectionComponent;
class UInstancedStaticMeshComponent;
class UPhysicalMaterial;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEOMETRYCOLLECTIONENGINE_API UGeometryCollectionComponent : public UMeshComponent, public IChaosNotifyHandlerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyGeometryCollectionPhysicsStateChange, UGeometryCollectionComponent*, FracturedComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyGeometryCollectionPhysicsLoadingStateChange, UGeometryCollectionComponent*, FracturedComponent);
    
    UPROPERTY(EditAnywhere)
    AChaosSolverActor* ChaosSolverActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    UGeometryCollection* RestCollection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    TArray<AFieldSystemActor*> InitializationFields;
    
    UPROPERTY()
    bool Simulating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EObjectStateTypeEnum ObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceMotionBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableClustering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ClusterGroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxClusterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> DamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseSizeSpecificDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGeometryCollectionDamagePropagationData DamagePropagationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowRemovalOnSleep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowRemovalOnBreak;
    
    UPROPERTY()
    EClusterConnectionTypeEnum ClusterConnectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CollisionGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CollisionSampleFraction;
    
    UPROPERTY()
    float LinearEtherDrag;
    
    UPROPERTY()
    float AngularEtherDrag;
    
    UPROPERTY()
    UChaosPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInitialVelocityTypeEnum InitialVelocityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InitialLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InitialAngularVelocity;
    
    UPROPERTY()
    UPhysicalMaterial* PhysicalMaterialOverride;
    
    UPROPERTY()
    FGeomComponentCacheParameters CacheParameters;
    
    UPROPERTY()
    TArray<FTransform> RestTransforms;
    
    UPROPERTY(BlueprintAssignable)
    FNotifyGeometryCollectionPhysicsStateChange NotifyGeometryCollectionPhysicsStateChange;
    
    UPROPERTY(BlueprintAssignable)
    FNotifyGeometryCollectionPhysicsLoadingStateChange NotifyGeometryCollectionPhysicsLoadingStateChange;
    
    UPROPERTY(BlueprintAssignable)
    FOnChaosBreakEvent OnChaosBreakEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnChaosRemovalEvent OnChaosRemovalEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnChaosCrumblingEvent OnChaosCrumblingEvent;
    
    UPROPERTY(BlueprintReadWrite, Interp, Transient, VisibleAnywhere)
    float DesiredCacheTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    bool CachePlayback;
    
    UPROPERTY(BlueprintAssignable)
    FOnChaosPhysicsCollision OnChaosPhysicsCollision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bNotifyBreaks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bNotifyCollisions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bNotifyTrailing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bNotifyRemovals;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bNotifyCrumblings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCrumblingEventIncludesChildren;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bStoreVelocities;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowBoneColors;
    
    UPROPERTY(EditAnywhere)
    AGeometryCollectionISMPoolActor* ISMPool;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableReplication;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableAbandonAfterLevel;
    
    UPROPERTY()
    int32 ReplicationAbandonClusterLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ReplicationAbandonAfterLevel;
    
    UPROPERTY(Replicated)
    FGeometryCollectionRepData RepData;
    
private:
    UPROPERTY(Transient)
    UBodySetup* DummyBodySetup;
    
    UPROPERTY(Instanced)
    TArray<UInstancedStaticMeshComponent*> EmbeddedGeometryComponents;
    
public:
    UGeometryCollectionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetRestCollection(const UGeometryCollection* RestCollectionIn);
    
    UFUNCTION(BlueprintCallable)
    void SetNotifyRemovals(bool bNewNotifyRemovals);
    
    UFUNCTION(BlueprintCallable)
    void SetNotifyCrumblings(bool bNewNotifyCrumblings);
    
    UFUNCTION(BlueprintCallable)
    void SetNotifyBreaks(bool bNewNotifyBreaks);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllAnchors();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    
    UFUNCTION(BlueprintCallable)
    void GetMassAndExtents(int32 ItemIndex, float& OutMass, FBox& OutExtents);
    
    UFUNCTION(BlueprintCallable)
    int32 GetInitialLevel(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void CrumbleCluster(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void CrumbleActiveClusters();
    
    UFUNCTION(BlueprintCallable)
    void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
    
    UFUNCTION(BlueprintCallable)
    void ApplyLinearVelocity(int32 ItemIndex, const FVector& LinearVelocity);
    
    UFUNCTION(BlueprintCallable)
    void ApplyKinematicField(float Radius, FVector Position);
    
    UFUNCTION(BlueprintCallable)
    void ApplyInternalStrain(int32 ItemIndex, const FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain);
    
    UFUNCTION(BlueprintCallable)
    void ApplyExternalStrain(int32 ItemIndex, const FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBreakingLinearVelocity(int32 ItemIndex, const FVector& LinearVelocity);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBreakingAngularVelocity(int32 ItemIndex, const FVector& AngularVelocity);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAngularVelocity(int32 ItemIndex, const FVector& AngularVelocity);
    

    // Fix for true pure virtual functions not being implemented
};

