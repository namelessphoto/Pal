#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_RepairBench.generated.h"

class UPalMapObjectRepairItemModel;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_RepairBench : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMapObjectRepairItemModel* Model;
    
    UPalHUDDispatchParameter_RepairBench();

};

