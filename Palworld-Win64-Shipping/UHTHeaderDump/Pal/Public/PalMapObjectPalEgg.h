#pragma once
#include "CoreMinimal.h"
#include "PalMapObject.h"
#include "PalMapObjectPalEgg.generated.h"

class UPalMapObjectPickupItemPalEggParameterComponent;

UCLASS()
class PAL_API APalMapObjectPalEgg : public APalMapObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UPalMapObjectPickupItemPalEggParameterComponent* ParameterComponent;
    
public:
    APalMapObjectPalEgg(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    FName GetCharacterID();
    
};

