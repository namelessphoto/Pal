#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectDefenseModelBase.h"
#include "PalMapObjectDefenseAttackModelBase.generated.h"

UCLASS(Abstract)
class PAL_API UPalMapObjectDefenseAttackModelBase : public UPalMapObjectDefenseModelBase {
    GENERATED_BODY()
public:
    UPalMapObjectDefenseAttackModelBase();

    UFUNCTION(BlueprintPure)
    bool IsEnableRunning() const;
    
};

