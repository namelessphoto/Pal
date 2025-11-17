#pragma once
#include "CoreMinimal.h"
#include "ShooterSpringCameraParameter.h"
#include "ShooterSpringCameraAdditionalOffset.generated.h"

USTRUCT(BlueprintType)
struct FShooterSpringCameraAdditionalOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName flagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FShooterSpringCameraParameter CameraOffset;
    
    PAL_API FShooterSpringCameraAdditionalOffset();
};

