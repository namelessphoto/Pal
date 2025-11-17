#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalFoliageInstanceId.h"
#include "PalFoliageInstanceRepInfo.generated.h"

class UPalFoliageInstance;

USTRUCT()
struct FPalFoliageInstanceRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName FoliageTypeId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalFoliageInstanceId InstanceId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalFoliageInstance* Instance;
    
    PAL_API FPalFoliageInstanceRepInfo();
};

