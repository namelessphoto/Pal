#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalCharacterStoredParameterId.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterStoredParameterId {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FGuid ID;
    
    PAL_API FPalCharacterStoredParameterId();
};
FORCEINLINE uint32 GetTypeHash(const FPalCharacterStoredParameterId) { return 0; }

