#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "PalBuildObject.h"
#include "PalBuildObjectBreedFarm.generated.h"

UCLASS()
class PAL_API APalBuildObjectBreedFarm : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FComponentReference ChestInteractRef;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FComponentReference WalkAroundVolumeRef;
    
public:
    APalBuildObjectBreedFarm(const FObjectInitializer& ObjectInitializer);

};

