#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigComputedTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigComputedTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Transform;
    
    FRigComputedTransform();
};

