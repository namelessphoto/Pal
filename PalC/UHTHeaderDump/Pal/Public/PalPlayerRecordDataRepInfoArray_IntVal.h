#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalPlayerRecordDataRepInfo_IntVal.h"
#include "PalPlayerRecordDataRepInfoArray_IntVal.generated.h"

USTRUCT()
struct FPalPlayerRecordDataRepInfoArray_IntVal : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleInstanceOnly)
    TArray<FPalPlayerRecordDataRepInfo_IntVal> Items;
    
public:
    PAL_API FPalPlayerRecordDataRepInfoArray_IntVal();
};

