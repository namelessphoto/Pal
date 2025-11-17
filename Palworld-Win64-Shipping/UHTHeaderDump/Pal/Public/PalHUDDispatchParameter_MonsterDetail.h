#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_MonsterDetail.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_MonsterDetail : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalIndividualCharacterHandle* IndividualHandle;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsEditable;
    
    UPalHUDDispatchParameter_MonsterDetail();

};

