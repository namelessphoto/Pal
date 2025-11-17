#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalMapObjectSpawnBlocker.generated.h"

UCLASS()
class PAL_API APalMapObjectSpawnBlocker : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 ProbabilityActivate;
    
public:
    APalMapObjectSpawnBlocker(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetActivateBlock(const bool bActivate);
    
};

