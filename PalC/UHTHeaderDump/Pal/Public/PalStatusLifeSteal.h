#pragma once
#include "CoreMinimal.h"
#include "PalStatusBase.h"
#include "PalStatusLifeSteal.generated.h"

UCLASS()
class PAL_API UPalStatusLifeSteal : public UPalStatusBase {
    GENERATED_BODY()
public:
    UPalStatusLifeSteal();

    UFUNCTION(BlueprintNativeEvent)
    void OnLifeSteal(int32 Damage);
    
protected:
    UFUNCTION(BlueprintPure)
    int32 CalucRecoverPoint(int32 Damage);
    
};

