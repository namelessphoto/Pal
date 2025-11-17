#pragma once
#include "CoreMinimal.h"
#include "ERigMetadataType.h"
#include "RigBaseMetadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    ERigMetadataType Type;
    
public:
    FRigBaseMetadata();
};

