#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBase.h"
#include "PalAIActionFed.generated.h"

class APalCharacter;

UCLASS(EditInlineNew)
class UPalAIActionFed : public UPalAIActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    APalCharacter* ApproachTarget;
    
public:
    UPalAIActionFed();

};

