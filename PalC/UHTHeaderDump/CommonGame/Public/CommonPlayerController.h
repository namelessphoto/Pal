#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModularGameplayActors -ObjectName=ModularPlayerController -FallbackName=ModularPlayerController
#include "CommonPlayerController.generated.h"

UCLASS()
class COMMONGAME_API ACommonPlayerController : public AModularPlayerController {
    GENERATED_BODY()
public:
    ACommonPlayerController(const FObjectInitializer& ObjectInitializer);

};

