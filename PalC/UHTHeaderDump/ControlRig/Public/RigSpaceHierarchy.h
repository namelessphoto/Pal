#pragma once
#include "CoreMinimal.h"
#include "RigSpace.h"
#include "RigSpaceHierarchy.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigSpaceHierarchy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FRigSpace> Spaces;
    
public:
    FRigSpaceHierarchy();
};

