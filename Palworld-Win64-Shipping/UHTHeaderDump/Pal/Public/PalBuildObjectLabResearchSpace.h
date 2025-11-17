#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalBuildObjectChildActorVisualControlPartInterface.h"
#include "PalBuildObjectLabResearchSpace.generated.h"

UCLASS()
class PAL_API APalBuildObjectLabResearchSpace : public AActor, public IPalBuildObjectChildActorVisualControlPartInterface {
    GENERATED_BODY()
public:
    APalBuildObjectLabResearchSpace(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

