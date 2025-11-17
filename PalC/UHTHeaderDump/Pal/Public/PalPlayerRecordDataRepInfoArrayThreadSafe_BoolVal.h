#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalPlayerRecordDataRepInfoThreadSafe_BoolVal.h"
#include "PalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleInstanceOnly)
    TArray<FPalPlayerRecordDataRepInfoThreadSafe_BoolVal> Items;
    
public:
    PAL_API FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal();
};

