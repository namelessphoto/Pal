#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigBaseMetadata.h"
#include "RigQuatArrayMetadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigQuatArrayMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FQuat> Value;
    
public:
    FRigQuatArrayMetadata();
};

