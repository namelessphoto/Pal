#pragma once
#include "CoreMinimal.h"
#include "EPalActionType.h"
#include "PalMapObjectPickupItemData.h"
#include "PalMapObjectPickupItemParameterComponentBase.h"
#include "PalMapObjectPickupItemParameterComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectPickupItemParameterComponent : public UPalMapObjectPickupItemParameterComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPalMapObjectPickupItemData> DropItems;
    
    UPROPERTY(EditDefaultsOnly)
    float LongHoldInteractDuration;
    
    UPROPERTY(EditDefaultsOnly)
    EPalActionType InteractPlayerActionType;
    
    UPROPERTY(EditDefaultsOnly)
    bool bForceIgnoreSaveItemContainer;
    
    UPalMapObjectPickupItemParameterComponent(const FObjectInitializer& ObjectInitializer);

};

