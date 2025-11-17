#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPalWorkSuitability.h"
#include "PalIndividualCharacterParameterUtility.generated.h"

class UPalIndividualCharacterParameter;

UCLASS(BlueprintType)
class UPalIndividualCharacterParameterUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalIndividualCharacterParameterUtility();

    UFUNCTION(BlueprintPure)
    static int32 CraftSpeedWorkSuitability(const EPalWorkSuitability WorkSuitability, UPalIndividualCharacterParameter* Parameter);
    
    UFUNCTION(BlueprintPure)
    static int32 CraftSpeed(UPalIndividualCharacterParameter* Parameter);
    
};

