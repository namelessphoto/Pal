#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPalMapBaseCampWorkerOrderType.h"
#include "PalMapBaseCampWorkerOrderTypeUtility.generated.h"

UCLASS(BlueprintType)
class UPalMapBaseCampWorkerOrderTypeUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalMapBaseCampWorkerOrderTypeUtility();

    UFUNCTION(BlueprintPure)
    static bool IsBattleOrderType(const EPalMapBaseCampWorkerOrderType OrderType);
    
};

