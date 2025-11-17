#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigBaseMetadata.h"
#include "RigLinearColorMetadata.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigLinearColorMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FLinearColor Value;
    
public:
    FRigLinearColorMetadata();
};

