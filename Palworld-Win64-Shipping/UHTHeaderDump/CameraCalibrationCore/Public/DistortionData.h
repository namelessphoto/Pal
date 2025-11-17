#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "DistortionData.generated.h"

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FDistortionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FVector2D> DistortedUVs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverscanFactor;
    
    FDistortionData();
};

