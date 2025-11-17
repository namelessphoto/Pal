#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalCoopSkillSearchType.h"
#include "PalInstanceID.h"
#include "PalCoopSkillSearchResultParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalCoopSkillSearchResultParameter {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    EPalCoopSkillSearchType SearchType;
    
    UPROPERTY(VisibleAnywhere)
    FVector Location;
    
    UPROPERTY(VisibleAnywhere)
    FGuid InstanceId;
    
    UPROPERTY(VisibleAnywhere)
    FPalInstanceID IndividualId;
    
    UPROPERTY(VisibleAnywhere)
    FGuid RequestPlayerUId;
    
    PAL_API FPalCoopSkillSearchResultParameter();
};

