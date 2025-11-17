#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalWorkAssignRepInfo.generated.h"

class UPalWorkAssign;

USTRUCT(BlueprintType)
struct FPalWorkAssignRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 LocationIndex;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalWorkAssign* WorkAssign;
    
    PAL_API FPalWorkAssignRepInfo();
};

