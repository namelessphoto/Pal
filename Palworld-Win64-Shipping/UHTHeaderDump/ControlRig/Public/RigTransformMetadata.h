#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigBaseMetadata.h"
#include "RigTransformMetadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigTransformMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FTransform Value;
    
public:
    FRigTransformMetadata();
};

