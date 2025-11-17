#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PalBuildObject.h"
#include "PalBuildObjectBaseCampPoint.generated.h"

class UStaticMeshComponent;

UCLASS()
class PAL_API APalBuildObjectBaseCampPoint : public APalBuildObject {
    GENERATED_BODY()
public:
    APalBuildObjectBaseCampPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    FTransform GetWorkerSpawnLocalTransform() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FTransform GetFastTravelLocalTransform() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UStaticMeshComponent* GetBaseCampPointMeshComponent() const;
    
};

