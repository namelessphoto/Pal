#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalDropCharacterExtraParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalDropCharacterExtraParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid DropPlayerUId;
    
    PAL_API FPalDropCharacterExtraParameter();
};

