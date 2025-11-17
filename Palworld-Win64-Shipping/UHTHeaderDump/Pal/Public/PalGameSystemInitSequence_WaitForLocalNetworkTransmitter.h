#pragma once
#include "CoreMinimal.h"
#include "PalGameSystemInitSequenceBase.h"
#include "PalGameSystemInitSequence_WaitForLocalNetworkTransmitter.generated.h"

UCLASS()
class UPalGameSystemInitSequence_WaitForLocalNetworkTransmitter : public UPalGameSystemInitSequenceBase {
    GENERATED_BODY()
public:
    UPalGameSystemInitSequence_WaitForLocalNetworkTransmitter();

};

