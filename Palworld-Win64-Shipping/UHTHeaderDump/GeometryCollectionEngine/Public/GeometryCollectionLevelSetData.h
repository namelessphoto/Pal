#pragma once
#include "CoreMinimal.h"
#include "GeometryCollectionLevelSetData.generated.h"

USTRUCT()
struct GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionLevelSetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MinLevelSetResolution;
    
    UPROPERTY(EditAnywhere)
    int32 MaxLevelSetResolution;
    
    UPROPERTY(EditAnywhere)
    int32 MinClusterLevelSetResolution;
    
    UPROPERTY(EditAnywhere)
    int32 MaxClusterLevelSetResolution;
    
    FGeometryCollectionLevelSetData();
};

