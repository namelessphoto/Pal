#pragma once
#include "CoreMinimal.h"
#include "PalActorClassSpawnerInClientBase.h"
#include "PalActorClassSpawnerOnlyFieldActiveInClient.generated.h"

UCLASS()
class PAL_API APalActorClassSpawnerOnlyFieldActiveInClient : public APalActorClassSpawnerInClientBase {
    GENERATED_BODY()
public:
    APalActorClassSpawnerOnlyFieldActiveInClient(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnReturnToFieldFromStage_ClientInternal();
    
    UFUNCTION()
    void OnEnteredStage_ClientInternal();
    
};

