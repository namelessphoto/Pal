#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RigBaseMetadata.h"
#include "RigRotatorMetadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigRotatorMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FRotator Value;
    
public:
    FRigRotatorMetadata();
};

