#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ComposurePostMoveSettings.generated.h"

USTRUCT(BlueprintType)
struct COMPOSURE_API FComposurePostMoveSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Pivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Scale;
    
    FComposurePostMoveSettings();
};

