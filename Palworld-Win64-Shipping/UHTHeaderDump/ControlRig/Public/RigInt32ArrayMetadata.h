#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigInt32ArrayMetadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigInt32ArrayMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<int32> Value;
    
public:
    FRigInt32ArrayMetadata();
};

