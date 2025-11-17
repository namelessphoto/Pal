#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectGlobalPalStorageModel.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS()
class UPalMapObjectGlobalPalStorageModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> GlobalPalStorageWidget;
    
    UPalMapObjectGlobalPalStorageModel();

};

