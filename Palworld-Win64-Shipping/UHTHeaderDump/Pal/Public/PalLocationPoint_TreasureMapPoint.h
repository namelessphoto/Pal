#pragma once
#include "CoreMinimal.h"
#include "PalLocationPoint.h"
#include "PalLocationPoint_TreasureMapPoint.generated.h"

UCLASS()
class UPalLocationPoint_TreasureMapPoint : public UPalLocationPoint {
    GENERATED_BODY()
public:
    UPalLocationPoint_TreasureMapPoint();

    UFUNCTION(BlueprintPure)
    int32 GetRarity() const;
    
};

