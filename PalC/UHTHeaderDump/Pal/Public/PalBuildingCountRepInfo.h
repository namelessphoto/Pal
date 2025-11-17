#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBuildingCountRepInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildingCountRepInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid BaseCampId;
    
    UPROPERTY()
    int32 BuildingNum;
    
    PAL_API FPalBuildingCountRepInfo();
};

