#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectInteractRestrictType.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterInteract.generated.h"

UCLASS()
class UPalMapObjectModelInitializeExtraParameterInteract : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    EPalMapObjectInteractRestrictType RestrictType;
    
    UPalMapObjectModelInitializeExtraParameterInteract();

};

