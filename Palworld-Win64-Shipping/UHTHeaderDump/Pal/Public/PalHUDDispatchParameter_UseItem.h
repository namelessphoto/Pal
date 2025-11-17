#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_UseItem.generated.h"

class UPalItemSlot;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_UseItem : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalItemSlot* TargetSlot;
    
    UPalHUDDispatchParameter_UseItem();

};

