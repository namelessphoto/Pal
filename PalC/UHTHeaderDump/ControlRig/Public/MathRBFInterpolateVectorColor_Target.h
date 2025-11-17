#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MathRBFInterpolateVectorColor_Target.generated.h"

USTRUCT(BlueprintType)
struct FMathRBFInterpolateVectorColor_Target {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Value;
    
    CONTROLRIG_API FMathRBFInterpolateVectorColor_Target();
};

