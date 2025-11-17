#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PalPlayerInfoForMap.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerInfoForMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FString PlayerName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTransform Transform;
    
    PAL_API FPalPlayerInfoForMap();
};

