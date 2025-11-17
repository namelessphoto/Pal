#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalWaitInfoWorldHUDParameter.generated.h"

class APalBossTower;

UCLASS(BlueprintType)
class UPalWaitInfoWorldHUDParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    APalBossTower* BossTower;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool isWaiting;
    
    UPalWaitInfoWorldHUDParameter();

};

