#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalPlayerRecordDataRepInfo_BoolVal.generated.h"

USTRUCT()
struct FPalPlayerRecordDataRepInfo_BoolVal : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FName Key;
    
    UPROPERTY(VisibleInstanceOnly)
    bool Value;
    
    PAL_API FPalPlayerRecordDataRepInfo_BoolVal();
};

