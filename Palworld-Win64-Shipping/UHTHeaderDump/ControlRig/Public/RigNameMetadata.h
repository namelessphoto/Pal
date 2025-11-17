#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigNameMetadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigNameMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FName Value;
    
public:
    FRigNameMetadata();
};

