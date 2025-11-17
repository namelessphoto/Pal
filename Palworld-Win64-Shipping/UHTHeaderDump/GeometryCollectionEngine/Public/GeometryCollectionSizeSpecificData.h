#pragma once
#include "CoreMinimal.h"
#include "GeometryCollectionCollisionTypeData.h"
#include "GeometryCollectionSizeSpecificData.generated.h"

USTRUCT(BlueprintType)
struct GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionSizeSpecificData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxSize;
    
    UPROPERTY(EditAnywhere)
    TArray<FGeometryCollectionCollisionTypeData> CollisionShapes;
    
    UPROPERTY(EditAnywhere)
    int32 DamageThreshold;
    
    FGeometryCollectionSizeSpecificData();
};

