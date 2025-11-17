#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_RecoverOtomo.generated.h"

class UPalMapObjectRecoverOtomoModel;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_RecoverOtomo : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalMapObjectRecoverOtomoModel* RecoverOtomoModel;
    
    UPalHUDDispatchParameter_RecoverOtomo();

};

