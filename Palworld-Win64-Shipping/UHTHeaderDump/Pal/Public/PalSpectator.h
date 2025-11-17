#pragma once
#include "CoreMinimal.h"
#include "PalCharacter.h"
#include "PalSpectator.generated.h"

UCLASS()
class PAL_API APalSpectator : public APalCharacter {
    GENERATED_BODY()
public:
    APalSpectator(const FObjectInitializer& ObjectInitializer);

};

