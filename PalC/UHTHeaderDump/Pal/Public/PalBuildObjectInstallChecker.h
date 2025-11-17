#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalBuildObjectInstallChecker.generated.h"

class APalBuildObject;
class UPalBuildObjectInstallStrategyBase;
class UPalBuildObjectOverlapChecker;
class UShapeComponent;

UCLASS()
class APalBuildObjectInstallChecker : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    APalBuildObject* TargetBuildObject;
    
    UPROPERTY(Instanced, Transient)
    UShapeComponent* OverlapCheckComponent;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UPalBuildObjectOverlapChecker* OverlapChecker;
    
    UPROPERTY(Transient)
    UPalBuildObjectInstallStrategyBase* InstallStrategy;
    
public:
    APalBuildObjectInstallChecker(const FObjectInitializer& ObjectInitializer);

};

