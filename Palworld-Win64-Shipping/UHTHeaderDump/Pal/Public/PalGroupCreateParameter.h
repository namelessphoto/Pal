#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalGroupType.h"
#include "EPalOrganizationType.h"
#include "PalGroupCreateParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalGroupCreateParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EPalGroupType Type;
    
    UPROPERTY(BlueprintReadWrite)
    EPalOrganizationType OrganizationType;
    
    UPROPERTY(BlueprintReadWrite)
    FString GroupName;
    
    UPROPERTY()
    FGuid AdminPlayerUId;
    
    PAL_API FPalGroupCreateParameter();
};

