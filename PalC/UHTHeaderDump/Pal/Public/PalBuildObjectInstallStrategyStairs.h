#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectInstallStrategyBase.h"
#include "PalBuildObjectInstallStrategyStairs.generated.h"

class APalBuildObject;

UCLASS()
class PAL_API UPalBuildObjectInstallStrategyStairs : public UPalBuildObjectInstallStrategyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    APalBuildObject* HitBuildObjectCache;
    
public:
    UPalBuildObjectInstallStrategyStairs();

};

