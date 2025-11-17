#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalGuildPlayerInfo.h"
#include "PalGuildPlayerInfoUtility.generated.h"

UCLASS(BlueprintType)
class UPalGuildPlayerInfoUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalGuildPlayerInfoUtility();

    UFUNCTION(BlueprintPure)
    static bool IsValid(const FPalGuildPlayerInfo& PlayerInfo);
    
};

