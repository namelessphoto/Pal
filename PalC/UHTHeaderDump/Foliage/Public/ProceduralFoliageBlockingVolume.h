#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "FoliageDensityFalloff.h"
#include "ProceduralFoliageBlockingVolume.generated.h"

class AProceduralFoliageVolume;

UCLASS(MinimalAPI)
class AProceduralFoliageBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AProceduralFoliageVolume* ProceduralFoliageVolume;
    
    UPROPERTY(EditAnywhere)
    FFoliageDensityFalloff DensityFalloff;
    
    AProceduralFoliageBlockingVolume(const FObjectInitializer& ObjectInitializer);

};

