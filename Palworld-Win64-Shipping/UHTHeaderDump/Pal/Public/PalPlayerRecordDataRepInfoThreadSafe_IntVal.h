#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalPlayerRecordDataRepInfoThreadSafe_IntVal.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerRecordDataRepInfoThreadSafe_IntVal : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FName Key;
    
    UPROPERTY(VisibleInstanceOnly)
    int32 Value;
    
    PAL_API FPalPlayerRecordDataRepInfoThreadSafe_IntVal();
};

