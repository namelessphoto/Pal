#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalOtomoLoadoutElementData.generated.h"

USTRUCT(BlueprintType)
struct FPalOtomoLoadoutElementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPalInstanceID PalInstanceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPalIndividualCharacterSaveParameter SaveParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ValidState;
    
    PAL_API FPalOtomoLoadoutElementData();
};

