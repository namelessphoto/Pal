#pragma once
#include "CoreMinimal.h"
#include "EPalFarmCropState.h"
#include "PalBuildObject.h"
#include "PalDataTableRowName_FarmCropData.h"
#include "PalBuildObjectFarmBlockV2.generated.h"

class APalMapObjectFarmCrop;
class UNiagaraSystem;

UCLASS()
class PAL_API APalBuildObjectFarmBlockV2 : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_FarmCropData CropDataId;
    
    UPROPERTY(EditDefaultsOnly)
    UNiagaraSystem* GrowupFX;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    APalMapObjectFarmCrop* CropActor;
    
public:
    APalBuildObjectFarmBlockV2(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnUpdateState_ServerInternal(EPalFarmCropState LastCropState, EPalFarmCropState NextCropState);
    
};

