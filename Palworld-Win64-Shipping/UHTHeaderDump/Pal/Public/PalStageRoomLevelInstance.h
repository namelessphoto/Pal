#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PalLevelInstance.h"
#include "PalStageRoomLevelInstance.generated.h"

UCLASS()
class PAL_API APalStageRoomLevelInstance : public APalLevelInstance {
    GENERATED_BODY()
public:
    APalStageRoomLevelInstance(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FTransform GetPlayerStartTransform() const;
    
};

