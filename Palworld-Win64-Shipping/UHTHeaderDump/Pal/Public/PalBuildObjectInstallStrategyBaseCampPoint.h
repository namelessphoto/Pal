#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "PalBuildObjectInstallStrategySinkableNormal.h"
#include "PalBuildObjectInstallStrategyBaseCampPoint.generated.h"

class APalBuildObjectBaseCampPoint;

UCLASS()
class PAL_API UPalBuildObjectInstallStrategyBaseCampPoint : public UPalBuildObjectInstallStrategySinkableNormal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    APalBuildObjectBaseCampPoint* TargetBuildObjectCache;
    
private:
    UPROPERTY()
    FBox CannotOverlapAreaBox;
    
public:
    UPalBuildObjectInstallStrategyBaseCampPoint();

};

