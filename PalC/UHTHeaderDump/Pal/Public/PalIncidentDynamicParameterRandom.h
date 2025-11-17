#pragma once
#include "CoreMinimal.h"
#include "PalIncidentDynamicParameter.h"
#include "PalIncidentDynamicParameterRandom.generated.h"

UCLASS()
class UPalIncidentDynamicParameterRandom : public UPalIncidentDynamicParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName SettingName;
    
    UPROPERTY(BlueprintReadOnly)
    int32 PlayerId;
    
    UPalIncidentDynamicParameterRandom();

};

