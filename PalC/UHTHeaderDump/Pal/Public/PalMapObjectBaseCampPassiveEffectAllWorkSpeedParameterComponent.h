#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectBaseCampPassiveEffectParameterComponentBase.h"
#include "PalMapObjectBaseCampPassiveEffectAllWorkSpeedParameterComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectBaseCampPassiveEffectAllWorkSpeedParameterComponent : public UPalMapObjectBaseCampPassiveEffectParameterComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WorkSpeedAdditionalRate;
    
    UPalMapObjectBaseCampPassiveEffectAllWorkSpeedParameterComponent(const FObjectInitializer& ObjectInitializer);

};

