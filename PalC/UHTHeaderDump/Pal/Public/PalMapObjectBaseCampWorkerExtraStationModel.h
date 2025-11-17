#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectBaseCampWorkerExtraStationModel.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS()
class PAL_API UPalMapObjectBaseCampWorkerExtraStationModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> PalBoxWidget;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> CampTaskWidget;
    
public:
    UPalMapObjectBaseCampWorkerExtraStationModel();

};

