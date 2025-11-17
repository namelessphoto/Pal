#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalArenaEntryPair.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaEntryPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGuid PlayerUId1;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid PlayerUId2;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsSoloMode;
    
    PAL_API FPalArenaEntryPair();
};

