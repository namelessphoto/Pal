#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectDropItem.h"
#include "PalMapObjectCommonDropItem3D.generated.h"

UCLASS()
class PAL_API APalMapObjectCommonDropItem3D : public APalMapObjectDropItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool registerdDistributeTick;
    
    UPROPERTY(EditDefaultsOnly)
    float CurrentLinearDamping;
    
    UPROPERTY(EditDefaultsOnly)
    float LinearDownSpeed;
    
    APalMapObjectCommonDropItem3D(const FObjectInitializer& ObjectInitializer);

};

