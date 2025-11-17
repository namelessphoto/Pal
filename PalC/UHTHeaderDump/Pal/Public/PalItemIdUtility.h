#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalItemId.h"
#include "PalItemIdUtility.generated.h"

UCLASS(BlueprintType)
class UPalItemIdUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalItemIdUtility();

    UFUNCTION(BlueprintPure)
    static FPalItemId Debug_CreateItemId(const FName StaticItemId);
    
};

