#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalStageInstanceId.generated.h"

USTRUCT(BlueprintType)
struct FPalStageInstanceId {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FGuid InternalId;
    
    UPROPERTY(VisibleInstanceOnly)
    bool bValid;
    
    PAL_API FPalStageInstanceId();
};
FORCEINLINE uint32 GetTypeHash(const FPalStageInstanceId) { return 0; }

