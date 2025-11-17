#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalMapObjectCharacterTeamMissionFunctionsBase.generated.h"

class UPalIndividualCharacterParameter;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalMapObjectCharacterTeamMissionFunctionsBase : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalMapObjectCharacterTeamMissionFunctionsBase();

    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float CalculateRewardRateByTeamStrength(const int32 TeamStrengthSum, const int32 RecommendStrength) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float CalculateRequiredSecondsRateByTeamStrength(const int32 TeamStrengthSum, const int32 RecommendStrength) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    int32 CalculateCharacterStrength(const UPalIndividualCharacterParameter* IndividualCharacterParameter) const;
    
};

