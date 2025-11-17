#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "GameFeatureStateChangeObserver.generated.h"

UINTERFACE(MinimalAPI)
class UGameFeatureStateChangeObserver : public UInterface {
    GENERATED_BODY()
};

class IGameFeatureStateChangeObserver : public IInterface {
    GENERATED_BODY()
public:
};

