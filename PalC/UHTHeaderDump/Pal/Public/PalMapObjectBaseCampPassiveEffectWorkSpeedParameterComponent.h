#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalMapObjectBaseCampPassiveEffectParameterComponentBase.h"
#include "PalMapObjectBaseCampPassiveEffectWorkSpeedParameterComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectBaseCampPassiveEffectWorkSpeedParameterComponent : public UPalMapObjectBaseCampPassiveEffectParameterComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AffectMaxNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalWorkSuitability TargetWorkSuitability;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WorkSpeedAdditionalRate;
    
    UPalMapObjectBaseCampPassiveEffectWorkSpeedParameterComponent(const FObjectInitializer& ObjectInitializer);

};

