#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectActionType.h"
#include "PalMapObjectExtraFunctionComponent.h"
#include "PalMapObjectItemProductExtraFunctionComponentEnterRoom.generated.h"

class UDataLayerAsset;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectItemProductExtraFunctionComponentEnterRoom : public UPalMapObjectExtraFunctionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EPalInteractiveObjectActionType ActionType;
    
    UPROPERTY(EditDefaultsOnly)
    UDataLayerAsset* DataLayerAsset;
    
public:
    UPalMapObjectItemProductExtraFunctionComponentEnterRoom(const FObjectInitializer& ObjectInitializer);

};

