#pragma once
#include "CoreMinimal.h"
#include "EBrushFalloffMode.h"
#include "LandmassFalloffSettings.generated.h"

USTRUCT(BlueprintType)
struct FLandmassFalloffSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBrushFalloffMode FalloffMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FalloffAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FalloffWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EdgeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ZOffset;
    
    LANDMASS_API FLandmassFalloffSettings();
};

