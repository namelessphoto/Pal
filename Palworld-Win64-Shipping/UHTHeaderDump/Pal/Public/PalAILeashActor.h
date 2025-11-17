#pragma once
#include "CoreMinimal.h"
#include "PalAILeashActorBase.h"
#include "PalAILeashActor.generated.h"

class APalAIController;
class APalAILeashActor;
class APalCharacter;

UCLASS()
class APalAILeashActor : public APalAILeashActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    APalCharacter* LeashedCharacter;
    
    APalAILeashActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static APalAILeashActor* SpawnLeash(APalAIController* InInstigatorController, float InLeashInnerRadius, float InLeashOuterRadius, float InInvokerExtentRadius, bool bInAutoActivateLeash);
    
};

