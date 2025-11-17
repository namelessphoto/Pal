#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectInstallStrategySinkableNormal.h"
#include "PalBuildObjectInstallStrategyPalStorage.generated.h"

class APalBuildObjectPalStorage;

UCLASS()
class UPalBuildObjectInstallStrategyPalStorage : public UPalBuildObjectInstallStrategySinkableNormal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    APalBuildObjectPalStorage* TargetPalStorageCache;
    
public:
    UPalBuildObjectInstallStrategyPalStorage();

};

