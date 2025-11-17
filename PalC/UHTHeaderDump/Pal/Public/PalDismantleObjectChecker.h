#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalDismantleObjectChecker.generated.h"

class APalBuildObject;

UCLASS()
class APalDismantleObjectChecker : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleInstanceOnly)
    APalBuildObject* TargetBuildObject;
    
public:
    APalDismantleObjectChecker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    APalBuildObject* GetTargetObject();
    
};

