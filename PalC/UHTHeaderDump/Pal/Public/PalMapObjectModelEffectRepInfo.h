#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "EPalStatusID.h"
#include "PalMapObjectModelEffectRepInfo.generated.h"

class UPalMapObjectModelEffectBase;

USTRUCT(BlueprintType)
struct FPalMapObjectModelEffectRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalStatusID statusID;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalMapObjectModelEffectBase* Effect;
    
    PAL_API FPalMapObjectModelEffectRepInfo();
};

