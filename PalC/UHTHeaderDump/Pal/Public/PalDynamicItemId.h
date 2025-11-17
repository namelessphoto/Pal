#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalDynamicItemId.generated.h"

USTRUCT(BlueprintType)
struct FPalDynamicItemId {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FGuid CreatedWorldId;
    
    UPROPERTY(VisibleAnywhere)
    FGuid LocalIdInCreatedWorld;
    
    PAL_API FPalDynamicItemId();
};
FORCEINLINE uint32 GetTypeHash(const FPalDynamicItemId) { return 0; }

