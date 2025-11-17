#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigBaseMetadata.h"
#include "RigQuatMetadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigQuatMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FQuat Value;
    
public:
    FRigQuatMetadata();
};

