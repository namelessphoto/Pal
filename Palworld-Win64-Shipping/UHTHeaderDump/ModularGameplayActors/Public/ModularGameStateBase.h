#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameStateBase -FallbackName=GameStateBase
#include "ModularGameStateBase.generated.h"

UCLASS()
class MODULARGAMEPLAYACTORS_API AModularGameStateBase : public AGameStateBase {
    GENERATED_BODY()
public:
    AModularGameStateBase(const FObjectInitializer& ObjectInitializer);

};

