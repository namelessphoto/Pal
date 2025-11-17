#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NodalPointOffset.generated.h"

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FNodalPointOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat RotationOffset;
    
    FNodalPointOffset();
};

