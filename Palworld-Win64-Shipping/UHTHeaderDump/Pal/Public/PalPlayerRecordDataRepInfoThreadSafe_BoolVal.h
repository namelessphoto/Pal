#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalPlayerRecordDataRepInfoThreadSafe_BoolVal.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerRecordDataRepInfoThreadSafe_BoolVal : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FName Key;
    
    UPROPERTY(VisibleInstanceOnly)
    bool Value;
    
    PAL_API FPalPlayerRecordDataRepInfoThreadSafe_BoolVal();
};

