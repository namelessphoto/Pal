#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathBase.h"
#include "RigUnit_NoiseVector2.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_NoiseVector2 : public FRigUnit_MathBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Minimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Maximum;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Result;
    
    UPROPERTY()
    FVector Time;
    
    FRigUnit_NoiseVector2();
};

