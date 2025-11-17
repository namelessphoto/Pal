#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameState -FallbackName=GameState
#include "ModularGameState.generated.h"

UCLASS()
class MODULARGAMEPLAYACTORS_API AModularGameState : public AGameState {
    GENERATED_BODY()
public:
    AModularGameState(const FObjectInitializer& ObjectInitializer);

};

