#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigControlElementCustomization.generated.h"

USTRUCT(BlueprintType)
struct FRigControlElementCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FRigElementKey> AvailableSpaces;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FRigElementKey> RemovedSpaces;
    
    CONTROLRIG_API FRigControlElementCustomization();
};

