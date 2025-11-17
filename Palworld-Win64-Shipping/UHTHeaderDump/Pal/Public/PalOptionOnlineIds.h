#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalOptionOnlineIds.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionOnlineIds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGuid PlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString CachePlayerName;
    
    PAL_API FPalOptionOnlineIds();
};

