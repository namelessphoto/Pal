#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalDimensionStorageRestoreInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalDimensionStorageRestoreInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid RestorePlayerUId;
    
    UPROPERTY()
    int32 RestoreSlotIndex;
    
    UPROPERTY()
    int32 OriginalLockerDataIndex;
    
    PAL_API FPalDimensionStorageRestoreInfo();
};

