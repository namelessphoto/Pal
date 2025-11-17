#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectInstallStrategyBase.h"
#include "PalBuildObjectInstallStrategyPillar.generated.h"

class APalBuildObject;

UCLASS()
class PAL_API UPalBuildObjectInstallStrategyPillar : public UPalBuildObjectInstallStrategyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    APalBuildObject* HitBuildObjectCache;
    
public:
    UPalBuildObjectInstallStrategyPillar();

};

