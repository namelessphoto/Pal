#pragma once
#include "CoreMinimal.h"
#include "PalGameSystemInitSequenceBase.h"
#include "PalGameSystemInitSequence_WaitForWorldSystemInit.generated.h"

UCLASS()
class UPalGameSystemInitSequence_WaitForWorldSystemInit : public UPalGameSystemInitSequenceBase {
    GENERATED_BODY()
public:
    UPalGameSystemInitSequence_WaitForWorldSystemInit();

};

