#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPalStatusHungerType.h"
#include "PalStatusHungerTypeUtility.generated.h"

UCLASS(BlueprintType)
class UPalStatusHungerTypeUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalStatusHungerTypeUtility();

    UFUNCTION(BlueprintPure)
    static bool IsHunger(EPalStatusHungerType Type);
    
};

