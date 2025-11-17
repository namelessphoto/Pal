#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalContainerId.generated.h"

USTRUCT(BlueprintType)
struct FPalContainerId {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FGuid ID;
    
    PAL_API FPalContainerId();
};
FORCEINLINE uint32 GetTypeHash(const FPalContainerId) { return 0; }

