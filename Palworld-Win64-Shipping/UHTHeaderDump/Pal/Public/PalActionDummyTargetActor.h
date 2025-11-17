#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalActionDummyTargetActor.generated.h"

UCLASS()
class APalActionDummyTargetActor : public AActor {
    GENERATED_BODY()
public:
    APalActionDummyTargetActor(const FObjectInitializer& ObjectInitializer);

};

