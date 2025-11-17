#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalLocationPoint_QuestBase.h"
#include "PalLocationPoint_QuestTracking.generated.h"

class UPalIndividualCharacterParameter;

UCLASS()
class PAL_API UPalLocationPoint_QuestTracking : public UPalLocationPoint_QuestBase {
    GENERATED_BODY()
public:
    UPalLocationPoint_QuestTracking();

protected:
    UFUNCTION()
    void OnDeleteCharacterHPGauge(UPalIndividualCharacterParameter* Parameter);
    
public:
    UFUNCTION(BlueprintPure)
    FPalInstanceID GetTargetCharacterInstanceId() const;
    
};

