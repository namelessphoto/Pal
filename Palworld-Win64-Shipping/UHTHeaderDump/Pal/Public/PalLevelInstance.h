#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LevelInstance -FallbackName=LevelInstance
#include "PalLevelInstance.generated.h"

UCLASS()
class PAL_API APalLevelInstance : public ALevelInstance {
    GENERATED_BODY()
public:
    APalLevelInstance(const FObjectInitializer& ObjectInitializer);

};

