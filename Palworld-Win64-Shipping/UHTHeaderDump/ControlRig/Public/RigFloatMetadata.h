#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigFloatMetadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigFloatMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    float Value;
    
public:
    FRigFloatMetadata();
};

