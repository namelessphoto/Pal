#pragma once
#include "CoreMinimal.h"
#include "EChaosRemovalSortMethod.h"
#include "ChaosRemovalEventRequestSettings.generated.h"

USTRUCT(BlueprintType)
struct FChaosRemovalEventRequestSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxNumberOfResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EChaosRemovalSortMethod SortMethod;
    
    GEOMETRYCOLLECTIONENGINE_API FChaosRemovalEventRequestSettings();
};

