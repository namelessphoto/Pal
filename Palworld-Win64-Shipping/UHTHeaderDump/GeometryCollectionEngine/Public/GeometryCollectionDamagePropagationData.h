#pragma once
#include "CoreMinimal.h"
#include "GeometryCollectionDamagePropagationData.generated.h"

USTRUCT(BlueprintType)
struct GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionDamagePropagationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BreakDamagePropagationFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShockDamagePropagationFactor;
    
    FGeometryCollectionDamagePropagationData();
};

