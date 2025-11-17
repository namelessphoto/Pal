#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_SimBase.h"
#include "RigUnit_DeltaFromPreviousTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DeltaFromPreviousTransform : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Value;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Delta;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform PreviousValue;
    
    UPROPERTY()
    FTransform Cache;
    
    FRigUnit_DeltaFromPreviousTransform();
};

