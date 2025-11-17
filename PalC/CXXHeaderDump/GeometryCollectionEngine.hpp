#ifndef UE4SS_SDK_GeometryCollectionEngine_HPP
#define UE4SS_SDK_GeometryCollectionEngine_HPP

#include "GeometryCollectionEngine_enums.hpp"

struct FChaosBreakingEventData
{
    FVector Location;
    FVector Velocity;
    float Mass;

};

struct FChaosBreakingEventRequestSettings
{
    int32 MaxNumberOfResults;
    float MinRadius;
    float MinSpeed;
    float MinMass;
    float MaxDistance;
    EChaosBreakingSortMethod SortMethod;

};

struct FChaosCollisionEventData
{
    FVector Location;
    FVector Normal;
    FVector Velocity1;
    FVector Velocity2;
    float Mass1;
    float Mass2;
    FVector Impulse;

};

struct FChaosCollisionEventRequestSettings
{
    int32 MaxNumberResults;
    float MinMass;
    float MinSpeed;
    float MinImpulse;
    float MaxDistance;
    EChaosCollisionSortMethod SortMethod;

};

struct FChaosRemovalEventData
{
    FVector Location;
    float Mass;
    int32 ParticleIndex;

};

struct FChaosRemovalEventRequestSettings
{
    int32 MaxNumberOfResults;
    float MinMass;
    float MaxDistance;
    EChaosRemovalSortMethod SortMethod;

};

struct FChaosTrailingEventData
{
    FVector Location;
    FVector Velocity;
    FVector AngularVelocity;
    float Mass;
    int32 ParticleIndex;

};

struct FChaosTrailingEventRequestSettings
{
    int32 MaxNumberOfResults;
    float MinMass;
    float MinSpeed;
    float MinAngularSpeed;
    float MaxDistance;
    EChaosTrailingSortMethod SortMethod;

};

struct FGeomComponentCacheParameters
{
    EGeometryCollectionCacheType CacheMode;
    class UGeometryCollectionCache* TargetCache;
    float ReverseCacheBeginTime;
    bool SaveCollisionData;
    bool DoGenerateCollisionData;
    int32 CollisionDataSizeMax;
    bool DoCollisionDataSpatialHash;
    float CollisionDataSpatialHashRadius;
    int32 MaxCollisionPerCell;
    bool SaveBreakingData;
    bool DoGenerateBreakingData;
    int32 BreakingDataSizeMax;
    bool DoBreakingDataSpatialHash;
    float BreakingDataSpatialHashRadius;
    int32 MaxBreakingPerCell;
    bool SaveTrailingData;
    bool DoGenerateTrailingData;
    int32 TrailingDataSizeMax;
    float TrailingMinSpeedThreshold;
    float TrailingMinVolumeThreshold;

};

struct FGeometryCollectionAutoInstanceMesh
{
    FSoftObjectPath StaticMesh;
    TArray<class UMaterialInterface*> Materials;

};

struct FGeometryCollectionCollisionParticleData
{
    float CollisionParticlesFraction;
    int32 MaximumCollisionParticles;

};

struct FGeometryCollectionCollisionTypeData
{
    ECollisionTypeEnum CollisionType;
    EImplicitTypeEnum ImplicitType;
    FGeometryCollectionLevelSetData LevelSet;
    FGeometryCollectionCollisionParticleData CollisionParticles;
    float CollisionObjectReductionPercentage;
    float CollisionMarginFraction;

};

struct FGeometryCollectionDamagePropagationData
{
    bool bEnabled;
    float BreakDamagePropagationFactor;
    float ShockDamagePropagationFactor;

};

struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{
    int32 ID;
    class AChaosSolverActor* Solver;
    class AGeometryCollectionActor* GeometryCollection;

};

struct FGeometryCollectionDebugDrawWarningMessage
{
};

struct FGeometryCollectionEmbeddedExemplar
{
    FSoftObjectPath StaticMeshExemplar;
    float StartCullDistance;
    float EndCullDistance;
    int32 InstanceCount;

};

struct FGeometryCollectionLevelSetData
{
    int32 MinLevelSetResolution;
    int32 MaxLevelSetResolution;
    int32 MinClusterLevelSetResolution;
    int32 MaxClusterLevelSetResolution;

};

struct FGeometryCollectionRepData
{
};

struct FGeometryCollectionSizeSpecificData
{
    float MaxSize;
    TArray<FGeometryCollectionCollisionTypeData> CollisionShapes;
    int32 DamageThreshold;

};

struct FGeometryCollectionSource
{
    FSoftObjectPath SourceGeometryObject;
    FTransform LocalTransform;
    TArray<class UMaterialInterface*> SourceMaterial;
    bool bAddInternalMaterials;
    bool bSplitComponents;

};

class AGeometryCollectionActor : public AActor
{
    class UGeometryCollectionComponent* GeometryCollectionComponent;
    class UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;

    bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit);
};

class AGeometryCollectionDebugDrawActor : public AActor
{
    FGeometryCollectionDebugDrawWarningMessage WarningMessage;
    FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;
    bool bDebugDrawWholeCollection;
    bool bDebugDrawHierarchy;
    bool bDebugDrawClustering;
    EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;
    bool bShowRigidBodyId;
    bool bShowRigidBodyCollision;
    bool bCollisionAtOrigin;
    bool bShowRigidBodyTransform;
    bool bShowRigidBodyInertia;
    bool bShowRigidBodyVelocity;
    bool bShowRigidBodyForce;
    bool bShowRigidBodyInfos;
    bool bShowTransformIndex;
    bool bShowTransform;
    bool bShowParent;
    bool bShowLevel;
    bool bShowConnectivityEdges;
    bool bShowGeometryIndex;
    bool bShowGeometryTransform;
    bool bShowBoundingBox;
    bool bShowFaces;
    bool bShowFaceIndices;
    bool bShowFaceNormals;
    bool bShowSingleFace;
    int32 SingleFaceIndex;
    bool bShowVertices;
    bool bShowVertexIndices;
    bool bShowVertexNormals;
    bool bUseActiveVisualization;
    float PointThickness;
    float LineThickness;
    bool bTextShadow;
    float TextScale;
    float NormalScale;
    float AxisScale;
    float ArrowScale;
    FColor RigidBodyIdColor;
    float RigidBodyTransformScale;
    FColor RigidBodyCollisionColor;
    FColor RigidBodyInertiaColor;
    FColor RigidBodyVelocityColor;
    FColor RigidBodyForceColor;
    FColor RigidBodyInfoColor;
    FColor TransformIndexColor;
    float TransformScale;
    FColor LevelColor;
    FColor ParentColor;
    float ConnectivityEdgeThickness;
    FColor GeometryIndexColor;
    float GeometryTransformScale;
    FColor BoundingBoxColor;
    FColor FaceColor;
    FColor FaceIndexColor;
    FColor FaceNormalColor;
    FColor SingleFaceColor;
    FColor VertexColor;
    FColor VertexIndexColor;
    FColor VertexNormalColor;
    class UBillboardComponent* SpriteComponent;

};

class AGeometryCollectionISMPoolActor : public AActor
{
    class UGeometryCollectionISMPoolComponent* ISMPoolComp;

};

class AGeometryCollectionRenderLevelSetActor : public AActor
{
    class UVolumeTexture* TargetVolumeTexture;
    class UMaterial* RayMarchMaterial;
    float SurfaceTolerance;
    float Isovalue;
    bool Enabled;
    bool RenderVolumeBoundingBox;

};

class UChaosDestructionListener : public USceneComponent
{
    uint8 bIsCollisionEventListeningEnabled;
    uint8 bIsBreakingEventListeningEnabled;
    uint8 bIsTrailingEventListeningEnabled;
    uint8 bIsRemovalEventListeningEnabled;
    FChaosCollisionEventRequestSettings CollisionEventRequestSettings;
    FChaosBreakingEventRequestSettings BreakingEventRequestSettings;
    FChaosTrailingEventRequestSettings TrailingEventRequestSettings;
    FChaosRemovalEventRequestSettings RemovalEventRequestSettings;
    TSet<AChaosSolverActor*> ChaosSolverActors;
    TSet<AGeometryCollectionActor*> GeometryCollectionActors;
    FChaosDestructionListenerOnCollisionEvents OnCollisionEvents;
    void OnChaosCollisionEvents(const TArray<FChaosCollisionEventData>& CollisionEvents);
    FChaosDestructionListenerOnBreakingEvents OnBreakingEvents;
    void OnChaosBreakingEvents(const TArray<FChaosBreakingEventData>& BreakingEvents);
    FChaosDestructionListenerOnTrailingEvents OnTrailingEvents;
    void OnChaosTrailingEvents(const TArray<FChaosTrailingEventData>& TrailingEvents);
    FChaosDestructionListenerOnRemovalEvents OnRemovalEvents;
    void OnChaosRemovalEvents(const TArray<FChaosRemovalEventData>& RemovalEvents);

    void SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);
    void SortRemovalEvents(TArray<FChaosRemovalEventData>& RemovalEvents, EChaosRemovalSortMethod SortMethod);
    void SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);
    void SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);
    void SetTrailingEventRequestSettings(const FChaosTrailingEventRequestSettings& InSettings);
    void SetTrailingEventEnabled(bool bIsEnabled);
    void SetRemovalEventRequestSettings(const FChaosRemovalEventRequestSettings& InSettings);
    void SetRemovalEventEnabled(bool bIsEnabled);
    void SetCollisionEventRequestSettings(const FChaosCollisionEventRequestSettings& InSettings);
    void SetCollisionEventEnabled(bool bIsEnabled);
    void SetBreakingEventRequestSettings(const FChaosBreakingEventRequestSettings& InSettings);
    void SetBreakingEventEnabled(bool bIsEnabled);
    void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
    void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
    bool IsEventListening();
    void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
    void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
};

class UGeometryCollection : public UObject
{
    bool EnableClustering;
    int32 ClusterGroupIndex;
    int32 MaxClusterLevel;
    TArray<float> DamageThreshold;
    bool bUseSizeSpecificDamageThreshold;
    bool PerClusterOnlyDamageThreshold;
    FGeometryCollectionDamagePropagationData DamagePropagationData;
    EClusterConnectionTypeEnum ClusterConnectionType;
    float ConnectionGraphBoundsFilteringMargin;
    TArray<class UMaterialInterface*> Materials;
    TArray<FGeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar;
    bool bUseFullPrecisionUVs;
    TArray<FGeometryCollectionAutoInstanceMesh> AutoInstanceMeshes;
    FSoftObjectPath RootProxy;
    bool bStripOnCook;
    bool EnableNanite;
    bool bMassAsDensity;
    float Mass;
    float MinimumMassClamp;
    bool bImportCollisionFromSource;
    bool bRemoveOnMaxSleep;
    FVector2D MaximumSleepTime;
    FVector2D RemovalDuration;
    bool bSlowMovingAsSleeping;
    float SlowMovingVelocityThreshold;
    TArray<FGeometryCollectionSizeSpecificData> SizeSpecificData;
    bool EnableRemovePiecesOnFracture;
    TArray<class UMaterialInterface*> RemoveOnFractureMaterials;
    class UDataflow* Dataflow;
    FGuid PersistentGuid;
    FGuid StateGuid;
    int32 BoneSelectedMaterialIndex;

};

class UGeometryCollectionCache : public UObject
{
    FRecordedTransformTrack RecordedData;
    class UGeometryCollection* SupportedCollection;
    FGuid CompatibleCollectionState;

};

class UGeometryCollectionComponent : public UMeshComponent
{
    class AChaosSolverActor* ChaosSolverActor;
    class UGeometryCollection* RestCollection;
    TArray<class AFieldSystemActor*> InitializationFields;
    bool Simulating;
    EObjectStateTypeEnum ObjectType;
    bool bForceMotionBlur;
    bool EnableClustering;
    int32 ClusterGroupIndex;
    int32 MaxClusterLevel;
    TArray<float> DamageThreshold;
    bool bUseSizeSpecificDamageThreshold;
    FGeometryCollectionDamagePropagationData DamagePropagationData;
    bool bAllowRemovalOnSleep;
    bool bAllowRemovalOnBreak;
    EClusterConnectionTypeEnum ClusterConnectionType;
    int32 CollisionGroup;
    float CollisionSampleFraction;
    float LinearEtherDrag;
    float AngularEtherDrag;
    class UChaosPhysicalMaterial* PhysicalMaterial;
    EInitialVelocityTypeEnum InitialVelocityType;
    FVector InitialLinearVelocity;
    FVector InitialAngularVelocity;
    class UPhysicalMaterial* PhysicalMaterialOverride;
    FGeomComponentCacheParameters CacheParameters;
    TArray<FTransform> RestTransforms;
    FGeometryCollectionComponentNotifyGeometryCollectionPhysicsStateChange NotifyGeometryCollectionPhysicsStateChange;
    void NotifyGeometryCollectionPhysicsStateChange(class UGeometryCollectionComponent* FracturedComponent);
    FGeometryCollectionComponentNotifyGeometryCollectionPhysicsLoadingStateChange NotifyGeometryCollectionPhysicsLoadingStateChange;
    void NotifyGeometryCollectionPhysicsLoadingStateChange(class UGeometryCollectionComponent* FracturedComponent);
    FGeometryCollectionComponentOnChaosBreakEvent OnChaosBreakEvent;
    void OnChaosBreakEvent(const FChaosBreakEvent& BreakEvent);
    FGeometryCollectionComponentOnChaosRemovalEvent OnChaosRemovalEvent;
    void OnChaosRemovalEvent(const FChaosRemovalEvent& RemovalEvent);
    FGeometryCollectionComponentOnChaosCrumblingEvent OnChaosCrumblingEvent;
    void OnChaosCrumblingEvent(const FChaosCrumblingEvent& CrumbleEvent);
    float DesiredCacheTime;
    bool CachePlayback;
    FGeometryCollectionComponentOnChaosPhysicsCollision OnChaosPhysicsCollision;
    void OnChaosPhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    bool bNotifyBreaks;
    bool bNotifyCollisions;
    bool bNotifyTrailing;
    bool bNotifyRemovals;
    bool bNotifyCrumblings;
    bool bCrumblingEventIncludesChildren;
    bool bStoreVelocities;
    bool bShowBoneColors;
    class AGeometryCollectionISMPoolActor* ISMPool;
    bool bEnableReplication;
    bool bEnableAbandonAfterLevel;
    int32 ReplicationAbandonClusterLevel;
    int32 ReplicationAbandonAfterLevel;
    FGeometryCollectionRepData RepData;
    class UBodySetup* DummyBodySetup;
    TArray<class UInstancedStaticMeshComponent*> EmbeddedGeometryComponents;

    void SetRestCollection(const class UGeometryCollection* RestCollectionIn);
    void SetNotifyRemovals(bool bNewNotifyRemovals);
    void SetNotifyCrumblings(bool bNewNotifyCrumblings);
    void SetNotifyBreaks(bool bNewNotifyBreaks);
    void RemoveAllAnchors();
    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
    void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
    void GetMassAndExtents(int32 ItemIndex, float& OutMass, FBox& OutExtents);
    int32 GetInitialLevel(int32 ItemIndex);
    void CrumbleCluster(int32 ItemIndex);
    void CrumbleActiveClusters();
    void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
    void ApplyLinearVelocity(int32 ItemIndex, const FVector& LinearVelocity);
    void ApplyKinematicField(float Radius, FVector Position);
    void ApplyInternalStrain(int32 ItemIndex, const FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain);
    void ApplyExternalStrain(int32 ItemIndex, const FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain);
    void ApplyBreakingLinearVelocity(int32 ItemIndex, const FVector& LinearVelocity);
    void ApplyBreakingAngularVelocity(int32 ItemIndex, const FVector& AngularVelocity);
    void ApplyAngularVelocity(int32 ItemIndex, const FVector& AngularVelocity);
};

class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
    class AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor;
    class AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;

};

class UGeometryCollectionISMPoolComponent : public USceneComponent
{
};

#endif
