#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectAppearanceData.h"
#include "PalMapObjectAppearanceDataWithId.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectAppearanceDataWithId {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid InstanceId;
    
    UPROPERTY()
    FPalMapObjectAppearanceData AppearanceData;
    
    PAL_API FPalMapObjectAppearanceDataWithId();
};

