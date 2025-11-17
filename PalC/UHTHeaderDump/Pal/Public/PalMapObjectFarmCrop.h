#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalFarmCropGrowupProcessSet.h"
#include "PalMapObjectFarmCrop.generated.h"

UCLASS()
class PAL_API APalMapObjectFarmCrop : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalFarmCropGrowupProcessSet> GrowupProcessSets;
    
public:
    APalMapObjectFarmCrop(const FObjectInitializer& ObjectInitializer);

};

