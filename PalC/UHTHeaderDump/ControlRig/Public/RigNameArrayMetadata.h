#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigNameArrayMetadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigNameArrayMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FName> Value;
    
public:
    FRigNameArrayMetadata();
};

