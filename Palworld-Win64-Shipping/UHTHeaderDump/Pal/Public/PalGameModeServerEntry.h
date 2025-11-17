#pragma once
#include "CoreMinimal.h"
#include "PalGameModeBase.h"
#include "PalGameModeServerEntry.generated.h"

UCLASS(NonTransient)
class PAL_API APalGameModeServerEntry : public APalGameModeBase {
    GENERATED_BODY()
public:
    APalGameModeServerEntry(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void LoadLevel();
    
};

