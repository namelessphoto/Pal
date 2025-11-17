#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectInstallStrategyBase.h"
#include "PalBuildObjectInstallStrategyFoundation.generated.h"

class APalBuildObject;

UCLASS()
class PAL_API UPalBuildObjectInstallStrategyFoundation : public UPalBuildObjectInstallStrategyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    APalBuildObject* HitBuildObjectCache;
    
public:
    UPalBuildObjectInstallStrategyFoundation();

};

