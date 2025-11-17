#pragma once
#include "CoreMinimal.h"
#include "PalStageRegistrationParameterBase.h"
#include "PalStageRegistrationParameterRoom.generated.h"

class UDataLayerInstance;

UCLASS()
class UPalStageRegistrationParameterRoom : public UPalStageRegistrationParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    UDataLayerInstance* DataLayerInstance;
    
    UPalStageRegistrationParameterRoom();

};

