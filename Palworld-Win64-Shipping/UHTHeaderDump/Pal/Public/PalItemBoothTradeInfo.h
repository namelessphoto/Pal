#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalItemAndNum.h"
#include "PalItemBoothTradeInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalItemBoothTradeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPalItemAndNum Product;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPalItemAndNum Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGuid SellerPlayerUId;
    
    PAL_API FPalItemBoothTradeInfo();
};

