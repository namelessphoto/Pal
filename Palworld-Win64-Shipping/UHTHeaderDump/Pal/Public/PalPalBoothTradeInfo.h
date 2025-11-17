#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalInstanceID.h"
#include "PalItemAndNum.h"
#include "PalPalBoothTradeInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalPalBoothTradeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPalInstanceID PalId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPalItemAndNum Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGuid SellerPlayerUId;
    
    PAL_API FPalPalBoothTradeInfo();
};

