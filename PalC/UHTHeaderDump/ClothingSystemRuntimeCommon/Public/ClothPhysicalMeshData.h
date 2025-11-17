#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeInterface -ObjectName=ClothVertBoneData -FallbackName=ClothVertBoneData
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
#include "ClothTetherData.h"
#include "PointWeightMap.h"
#include "ClothPhysicalMeshData.generated.h"

USTRUCT(BlueprintType)
struct CLOTHINGSYSTEMRUNTIMECOMMON_API FClothPhysicalMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FVector3f> Vertices;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector3f> normals;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> Indices;
    
    UPROPERTY(EditAnywhere)
    TMap<uint32, FPointWeightMap> WeightMaps;
    
    UPROPERTY(EditAnywhere)
    TArray<float> InverseMasses;
    
    UPROPERTY(EditAnywhere)
    TArray<FClothVertBoneData> BoneData;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> SelfCollisionIndices;
    
    UPROPERTY(EditAnywhere)
    FClothTetherData EuclideanTethers;
    
    UPROPERTY(EditAnywhere)
    FClothTetherData GeodesicTethers;
    
    UPROPERTY(EditAnywhere)
    int32 MaxBoneWeights;
    
    UPROPERTY(EditAnywhere)
    int32 NumFixedVerts;
    
    FClothPhysicalMeshData();
};

