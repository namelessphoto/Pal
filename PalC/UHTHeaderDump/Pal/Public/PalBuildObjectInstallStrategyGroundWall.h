#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectInstallStrategyBase.h"
#include "PalBuildObjectInstallStrategyGroundWall.generated.h"

class APalBuildObject;

UCLASS()
class UPalBuildObjectInstallStrategyGroundWall : public UPalBuildObjectInstallStrategyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    APalBuildObject* HitBuildObjectCache;
    
public:
    UPalBuildObjectInstallStrategyGroundWall();

};

