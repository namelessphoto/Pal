#pragma once
#include "CoreMinimal.h"
#include "NetObjectPrioritizerConfig.h"
#include "NetObjectCountLimiterConfig.generated.h"

UCLASS(MinimalAPI, NonTransient)
class UNetObjectCountLimiterConfig : public UNetObjectPrioritizerConfig {
    GENERATED_BODY()
public:
    UNetObjectCountLimiterConfig();

};

