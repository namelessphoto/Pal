#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalInstanceID.generated.h"

USTRUCT(BlueprintType)
struct FPalInstanceID {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FGuid PlayerUId;
    
    UPROPERTY(VisibleInstanceOnly)
    FGuid InstanceId;
    
    UPROPERTY(VisibleInstanceOnly)
    FString DebugName;
    
    PAL_API FPalInstanceID();
};
FORCEINLINE uint32 GetTypeHash(const FPalInstanceID) { return 0; }

