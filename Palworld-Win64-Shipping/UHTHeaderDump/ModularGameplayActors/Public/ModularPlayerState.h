#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerState -FallbackName=PlayerState
#include "ModularPlayerState.generated.h"

UCLASS()
class MODULARGAMEPLAYACTORS_API AModularPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    AModularPlayerState(const FObjectInitializer& ObjectInitializer);

};

