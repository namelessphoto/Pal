#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
#include "ModularGameMode.generated.h"

UCLASS(NonTransient)
class MODULARGAMEPLAYACTORS_API AModularGameMode : public AGameMode {
    GENERATED_BODY()
public:
    AModularGameMode(const FObjectInitializer& ObjectInitializer);

};

