#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalLightingVolumeController.generated.h"

class APPSkyCreator;
class APalSkyCreatorLightingVolume;

UCLASS()
class PAL_API APalLightingVolumeController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    APPSkyCreator* PPSkyCreator;
    
private:
    UPROPERTY(Transient)
    APalSkyCreatorLightingVolume* CurrentVolume;
    
    UPROPERTY(Transient)
    TArray<APalSkyCreatorLightingVolume*> Volumes;
    
public:
    APalLightingVolumeController(const FObjectInitializer& ObjectInitializer);

};

