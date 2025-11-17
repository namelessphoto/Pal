#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "PalBuildObject.h"
#include "PalBuildObjectFishPond.generated.h"

UCLASS()
class PAL_API APalBuildObjectFishPond : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FComponentReference ChestInteractRef;
    
public:
    APalBuildObjectFishPond(const FObjectInitializer& ObjectInitializer);

};

