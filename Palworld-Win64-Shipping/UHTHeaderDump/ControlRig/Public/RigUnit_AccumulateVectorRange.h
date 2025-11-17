#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_AccumulateBase.h"
#include "RigUnit_AccumulateVectorRange.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AccumulateVectorRange : public FRigUnit_AccumulateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Value;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Minimum;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Maximum;
    
    UPROPERTY()
    FVector AccumulatedMinimum;
    
    UPROPERTY()
    FVector AccumulatedMaximum;
    
    FRigUnit_AccumulateVectorRange();
};

