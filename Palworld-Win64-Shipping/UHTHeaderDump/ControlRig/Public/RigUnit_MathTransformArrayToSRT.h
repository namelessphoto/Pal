#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathTransformBase.h"
#include "RigUnit_MathTransformArrayToSRT.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathTransformArrayToSRT : public FRigUnit_MathTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTransform> Transforms;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FVector> Translations;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FQuat> Rotations;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FVector> Scales;
    
    FRigUnit_MathTransformArrayToSRT();
};

