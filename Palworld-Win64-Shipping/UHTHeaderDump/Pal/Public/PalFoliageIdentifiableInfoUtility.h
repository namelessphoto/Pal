#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalFoliageIdentifiableInfo.h"
#include "PalFoliageIdentifiableInfoUtility.generated.h"

UCLASS(BlueprintType)
class UPalFoliageIdentifiableInfoUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalFoliageIdentifiableInfoUtility();

    UFUNCTION(BlueprintPure)
    static bool IsValid(const FPalFoliageIdentifiableInfo& IdentifiableInfo);
    
};

