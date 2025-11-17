#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "PalBuildObject.h"
#include "PalBuildObjectMonsterFarm.generated.h"

UCLASS()
class PAL_API APalBuildObjectMonsterFarm : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FComponentReference WalkAroundVolumeRef;
    
public:
    APalBuildObjectMonsterFarm(const FObjectInitializer& ObjectInitializer);

};

