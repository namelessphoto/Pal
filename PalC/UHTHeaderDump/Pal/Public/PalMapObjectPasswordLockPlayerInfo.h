#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectPasswordLockPlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectPasswordLockPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid PlayerUId;
    
    UPROPERTY()
    int32 TryFailedCount;
    
    UPROPERTY()
    bool TrySuccessCache;
    
    PAL_API FPalMapObjectPasswordLockPlayerInfo();
};

