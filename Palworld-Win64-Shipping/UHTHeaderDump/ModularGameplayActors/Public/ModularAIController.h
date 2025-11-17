#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "ModularAIController.generated.h"

UCLASS()
class MODULARGAMEPLAYACTORS_API AModularAIController : public AAIController {
    GENERATED_BODY()
public:
    AModularAIController(const FObjectInitializer& ObjectInitializer);

};

