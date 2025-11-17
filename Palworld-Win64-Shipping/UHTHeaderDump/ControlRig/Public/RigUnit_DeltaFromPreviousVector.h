#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_SimBase.h"
#include "RigUnit_DeltaFromPreviousVector.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DeltaFromPreviousVector : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Value;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Delta;
    
    UPROPERTY(BlueprintReadOnly)
    FVector PreviousValue;
    
    UPROPERTY()
    FVector Cache;
    
    FRigUnit_DeltaFromPreviousVector();
};

