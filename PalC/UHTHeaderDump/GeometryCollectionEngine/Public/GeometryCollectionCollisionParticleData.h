#pragma once
#include "CoreMinimal.h"
#include "GeometryCollectionCollisionParticleData.generated.h"

USTRUCT()
struct GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionCollisionParticleData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CollisionParticlesFraction;
    
    UPROPERTY(EditAnywhere)
    int32 MaximumCollisionParticles;
    
    FGeometryCollectionCollisionParticleData();
};

