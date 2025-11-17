#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalIndividualCharacterSaveParameter.h"
#include "PalEggSaveInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalEggSaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SlotIndex;
    
    UPROPERTY()
    FGuid WorkId;
    
    UPROPERTY()
    FPalIndividualCharacterSaveParameter HatchedCharacterSaveParameter;
    
    PAL_API FPalEggSaveInfo();
};

