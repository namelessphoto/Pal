#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalBaseCampWorkCollectionRepInfo.h"
#include "PalFastBaseCampWorkCollectionRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastBaseCampWorkCollectionRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalBaseCampWorkCollectionRepInfo> Items;
    
    PAL_API FPalFastBaseCampWorkCollectionRepInfoArray();
};

