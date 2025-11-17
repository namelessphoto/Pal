#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigInt32Metadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigInt32Metadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    int32 Value;
    
public:
    FRigInt32Metadata();
};

