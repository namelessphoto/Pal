#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigBoolMetadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigBoolMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    bool Value;
    
public:
    FRigBoolMetadata();
};

