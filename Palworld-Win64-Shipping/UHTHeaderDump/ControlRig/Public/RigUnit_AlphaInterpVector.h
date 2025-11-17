#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputRange -FallbackName=InputRange
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputScaleBiasClamp -FallbackName=InputScaleBiasClamp
#include "RigUnit_SimBase.h"
#include "RigUnit_AlphaInterpVector.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AlphaInterpVector : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Bias;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bMapRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputRange InRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputRange OutRange;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bClampResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClampMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClampMax;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bInterpResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpSpeedIncreasing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpSpeedDecreasing;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Result;
    
    UPROPERTY()
    FInputScaleBiasClamp ScaleBiasClamp;
    
    FRigUnit_AlphaInterpVector();
};

