#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPalLandingType.h"
#include "PalLandingTypeUtility.generated.h"

UCLASS(BlueprintType)
class UPalLandingTypeUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalLandingTypeUtility();

    UFUNCTION(BlueprintPure)
    static bool IsRollStep(EPalLandingType T);
    
    UFUNCTION(BlueprintPure)
    static bool IsJumpLanding(EPalLandingType T);
    
    UFUNCTION(BlueprintPure)
    static bool IsFootStep(EPalLandingType T);
    
};

