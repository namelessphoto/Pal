#pragma once
#include "CoreMinimal.h"
#include "RigBaseMetadata.h"
#include "RigElementKey.h"
#include "RigElementKeyMetadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigElementKeyMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FRigElementKey Value;
    
public:
    FRigElementKeyMetadata();
};

