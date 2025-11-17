#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=EClusterConnectionTypeEnum -FallbackName=EClusterConnectionTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "GeometryCollectionAutoInstanceMesh.h"
#include "GeometryCollectionDamagePropagationData.h"
#include "GeometryCollectionEmbeddedExemplar.h"
#include "GeometryCollectionSizeSpecificData.h"
#include "GeometryCollection.generated.h"

class UDataflow;
class UMaterialInterface;

UCLASS(BlueprintType)
class GEOMETRYCOLLECTIONENGINE_API UGeometryCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool EnableClustering;
    
    UPROPERTY(EditAnywhere)
    int32 ClusterGroupIndex;
    
    UPROPERTY(EditAnywhere)
    int32 MaxClusterLevel;
    
    UPROPERTY(EditAnywhere)
    TArray<float> DamageThreshold;
    
    UPROPERTY(EditAnywhere)
    bool bUseSizeSpecificDamageThreshold;
    
    UPROPERTY(EditAnywhere)
    bool PerClusterOnlyDamageThreshold;
    
    UPROPERTY(EditAnywhere)
    FGeometryCollectionDamagePropagationData DamagePropagationData;
    
    UPROPERTY(EditAnywhere)
    EClusterConnectionTypeEnum ClusterConnectionType;
    
    UPROPERTY(EditAnywhere)
    float ConnectionGraphBoundsFilteringMargin;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> Materials;
    
    UPROPERTY(EditAnywhere)
    TArray<FGeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar;
    
    UPROPERTY(EditAnywhere)
    bool bUseFullPrecisionUVs;
    
    UPROPERTY(EditAnywhere)
    TArray<FGeometryCollectionAutoInstanceMesh> AutoInstanceMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath RootProxy;
    
    UPROPERTY(EditAnywhere)
    bool bStripOnCook;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableNanite;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMassAsDensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Mass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumMassClamp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bImportCollisionFromSource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRemoveOnMaxSleep;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D MaximumSleepTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D RemovalDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSlowMovingAsSleeping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SlowMovingVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    TArray<FGeometryCollectionSizeSpecificData> SizeSpecificData;
    
    UPROPERTY()
    bool EnableRemovePiecesOnFracture;
    
    UPROPERTY()
    TArray<UMaterialInterface*> RemoveOnFractureMaterials;
    
    UPROPERTY(EditAnywhere)
    UDataflow* Dataflow;
    
private:
    UPROPERTY()
    FGuid PersistentGuid;
    
    UPROPERTY()
    FGuid StateGuid;
    
    UPROPERTY()
    int32 BoneSelectedMaterialIndex;
    
public:
    UGeometryCollection();

};

