#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalPlayerRecordDataRepInfo_IntVal.generated.h"

USTRUCT()
struct FPalPlayerRecordDataRepInfo_IntVal : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FName Key;
    
    UPROPERTY(VisibleInstanceOnly)
    int32 Value;
    
    PAL_API FPalPlayerRecordDataRepInfo_IntVal();
};

