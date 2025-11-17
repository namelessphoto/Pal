#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalFoliageInstanceId.generated.h"

USTRUCT(BlueprintType)
struct FPalFoliageInstanceId {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FGuid Guid;
    
    PAL_API FPalFoliageInstanceId();
};
FORCEINLINE uint32 GetTypeHash(const FPalFoliageInstanceId) { return 0; }

