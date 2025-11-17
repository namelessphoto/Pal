#pragma once
#include "CoreMinimal.h"
#include "PalStatusBase.h"
#include "PalStatusDying.generated.h"

UCLASS()
class PAL_API UPalStatusDying : public UPalStatusBase {
    GENERATED_BODY()
public:
    UPalStatusDying();

    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsOtomoRevive() const;
    
};

