#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnit.h"
#include "RigUnit_GetControlFloat.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetControlFloat : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Control;
    
    UPROPERTY(BlueprintReadOnly)
    float FloatValue;
    
    UPROPERTY(BlueprintReadOnly)
    float Minimum;
    
    UPROPERTY(BlueprintReadOnly)
    float Maximum;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    FRigUnit_GetControlFloat();
};

