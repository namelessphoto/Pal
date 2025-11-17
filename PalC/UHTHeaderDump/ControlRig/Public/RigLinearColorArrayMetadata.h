#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigBaseMetadata.h"
#include "RigLinearColorArrayMetadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigLinearColorArrayMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FLinearColor> Value;
    
public:
    FRigLinearColorArrayMetadata();
};

