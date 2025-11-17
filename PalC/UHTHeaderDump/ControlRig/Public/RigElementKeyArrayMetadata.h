#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigElementKey.h"
#include "RigElementKeyArrayMetadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigElementKeyArrayMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FRigElementKey> Value;
    
public:
    FRigElementKeyArrayMetadata();
};

