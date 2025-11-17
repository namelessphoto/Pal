#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ShooterSpringCameraParameter.generated.h"

USTRUCT(BlueprintType)
struct FShooterSpringCameraParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndCameraInterpTime;
    
    PAL_API FShooterSpringCameraParameter();
};

