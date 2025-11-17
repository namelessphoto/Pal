#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ECollisionTypeEnum -FallbackName=ECollisionTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EImplicitTypeEnum -FallbackName=EImplicitTypeEnum
#include "GeometryCollectionCollisionParticleData.h"
#include "GeometryCollectionLevelSetData.h"
#include "GeometryCollectionCollisionTypeData.generated.h"

USTRUCT()
struct GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionCollisionTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECollisionTypeEnum CollisionType;
    
    UPROPERTY(EditAnywhere)
    EImplicitTypeEnum ImplicitType;
    
    UPROPERTY(EditAnywhere)
    FGeometryCollectionLevelSetData LevelSet;
    
    UPROPERTY(EditAnywhere)
    FGeometryCollectionCollisionParticleData CollisionParticles;
    
    UPROPERTY(EditAnywhere)
    float CollisionObjectReductionPercentage;
    
    UPROPERTY(EditAnywhere)
    float CollisionMarginFraction;
    
    FGeometryCollectionCollisionTypeData();
};

