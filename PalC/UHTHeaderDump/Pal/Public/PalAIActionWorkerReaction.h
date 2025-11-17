#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBase.h"
#include "PalAIActionWorkerReaction.generated.h"

class APalCharacter;

UCLASS(EditInlineNew)
class UPalAIActionWorkerReaction : public UPalAIActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    APalCharacter* LookTargetCharacter;
    
public:
    UPalAIActionWorkerReaction();

};

