#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalBuildObjectInstallStrategyBase.generated.h"

class AActor;
class APalBuildObject;

UCLASS(Abstract)
class UPalBuildObjectInstallStrategyBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    APalBuildObject* TargetBuildObject;
    
    UPROPERTY(Transient)
    APalBuildObject* ReplaceTargetBuildObject;
    
private:
    UPROPERTY(Transient)
    AActor* SnapHitActorCache;
    
    UPROPERTY(Transient)
    APalBuildObject* SnapHitBuildObjectCache;
    
public:
    UPalBuildObjectInstallStrategyBase();

};

