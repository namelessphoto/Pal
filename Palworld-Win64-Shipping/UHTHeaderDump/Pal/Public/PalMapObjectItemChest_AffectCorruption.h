#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectItemChestModel.h"
#include "PalMapObjectItemChest_AffectCorruption.generated.h"

class UPalMapObjectFunctionAffectedByWorkStatusBase;

UCLASS()
class PAL_API UPalMapObjectItemChest_AffectCorruption : public UPalMapObjectItemChestModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalMapObjectFunctionAffectedByWorkStatusBase* WorkAffection;
    
public:
    UPalMapObjectItemChest_AffectCorruption();

};

