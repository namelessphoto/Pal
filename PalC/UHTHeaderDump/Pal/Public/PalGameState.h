#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameStateBase -FallbackName=GameStateBase
#include "PalGameState.generated.h"

UCLASS(MinimalAPI)
class APalGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    APalGameState(const FObjectInitializer& ObjectInitializer);

};

