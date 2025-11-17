#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalGlobalPalStorageSaveParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalGlobalPalStorageSaveParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FPalIndividualCharacterSaveParameter SaveParameter;
    
    UPROPERTY(BlueprintReadOnly)
    FPalInstanceID InstanceId;
    
    PAL_API FPalGlobalPalStorageSaveParameter();
};

