#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigBoolArrayMetadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigBoolArrayMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<bool> Value;
    
public:
    FRigBoolArrayMetadata();
};

