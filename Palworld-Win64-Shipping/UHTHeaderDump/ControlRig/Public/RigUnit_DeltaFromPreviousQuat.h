#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_SimBase.h"
#include "RigUnit_DeltaFromPreviousQuat.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DeltaFromPreviousQuat : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Value;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat Delta;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat PreviousValue;
    
    UPROPERTY()
    FQuat Cache;
    
    FRigUnit_DeltaFromPreviousQuat();
};

