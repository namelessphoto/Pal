#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalUIItemPossessStatusIndicatorParameter.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(BlueprintType)
class UPalUIItemPossessStatusIndicatorParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalIndividualCharacterHandle* TargetCharacter;
    
    UPalUIItemPossessStatusIndicatorParameter();

};

