#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBelongInfo.h"
#include "PalMapObjectBelongInfo.generated.h"

USTRUCT()
struct FPalMapObjectBelongInfo : public FPalBelongInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid GroupId;
    
    PAL_API FPalMapObjectBelongInfo();
};

