#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalWorldSecurityWantedStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldSecurityWantedStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FDateTime ExpiredDate;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FGuid> CrimeInstanceIdArray;
    
    PAL_API FPalWorldSecurityWantedStateInfo();
};

