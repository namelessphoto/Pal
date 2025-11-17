#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalBaseCampRepInfo.generated.h"

class UPalBaseCampModel;

USTRUCT()
struct FPalBaseCampRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FGuid ID;
    
    UPROPERTY(VisibleInstanceOnly)
    UPalBaseCampModel* BaseCamp;
    
    PAL_API FPalBaseCampRepInfo();
};

