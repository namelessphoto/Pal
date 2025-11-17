#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RiderActionInfo.generated.h"

class UPalActionBase;

USTRUCT(BlueprintType)
struct FRiderActionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UPalActionBase> RideAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UPalActionBase> GetOffAction;
    
    PAL_API FRiderActionInfo();
};

