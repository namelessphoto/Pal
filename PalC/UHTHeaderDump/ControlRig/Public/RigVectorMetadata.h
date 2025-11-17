#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigBaseMetadata.h"
#include "RigVectorMetadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigVectorMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FVector Value;
    
public:
    FRigVectorMetadata();
};

