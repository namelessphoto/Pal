#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigFloatArrayMetadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigFloatArrayMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<float> Value;
    
public:
    FRigFloatArrayMetadata();
};

