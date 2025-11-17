#pragma once
#include "CoreMinimal.h"
#include "PalPlayerSettingsForServer.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerSettingsForServer {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bDisableAutoPickupItemInOverflowWeight;
    
    UPROPERTY()
    bool bDisableGuildJoinRequest;
    
    PAL_API FPalPlayerSettingsForServer();
};

