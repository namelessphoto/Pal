#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectInstallStrategyBase.h"
#include "PalBuildObjectInstallStrategyRoof.generated.h"

class APalBuildObject;

UCLASS()
class PAL_API UPalBuildObjectInstallStrategyRoof : public UPalBuildObjectInstallStrategyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    APalBuildObject* HitBuildObjectCache;
    
public:
    UPalBuildObjectInstallStrategyRoof();

};

