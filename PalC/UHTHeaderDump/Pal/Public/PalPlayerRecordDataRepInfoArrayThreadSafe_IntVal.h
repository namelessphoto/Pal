#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalPlayerRecordDataRepInfoThreadSafe_IntVal.h"
#include "PalPlayerRecordDataRepInfoArrayThreadSafe_IntVal.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleInstanceOnly)
    TArray<FPalPlayerRecordDataRepInfoThreadSafe_IntVal> Items;
    
public:
    PAL_API FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal();
};

