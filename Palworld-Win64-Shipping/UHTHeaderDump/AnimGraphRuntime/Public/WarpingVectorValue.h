#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EWarpingVectorMode.h"
#include "WarpingVectorValue.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FWarpingVectorValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWarpingVectorMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Value;
    
    FWarpingVectorValue();
};

