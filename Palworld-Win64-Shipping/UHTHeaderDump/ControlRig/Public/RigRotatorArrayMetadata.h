#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RigBaseMetadata.h"
#include "RigRotatorArrayMetadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigRotatorArrayMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FRotator> Value;
    
public:
    FRigRotatorArrayMetadata();
};

