#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "FocalLengthInfo.generated.h"

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FFocalLengthInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D FxFy;
    
    FFocalLengthInfo();
};

