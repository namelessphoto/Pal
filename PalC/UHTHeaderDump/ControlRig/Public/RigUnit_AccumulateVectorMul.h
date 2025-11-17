#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_AccumulateBase.h"
#include "RigUnit_AccumulateVectorMul.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AccumulateVectorMul : public FRigUnit_AccumulateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIntegrateDeltaTime;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Result;
    
    UPROPERTY()
    FVector AccumulatedValue;
    
    FRigUnit_AccumulateVectorMul();
};

