#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathBase.h"
#include "RigUnit_NoiseVector.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_NoiseVector : public FRigUnit_MathBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Minimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Maximum;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Result;
    
    UPROPERTY()
    FVector Time;
    
    FRigUnit_NoiseVector();
};

