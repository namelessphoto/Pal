#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalStageInstanceId.h"
#include "PalStageModelRepInfo.generated.h"

class UPalStageModelBase;

USTRUCT()
struct FPalStageModelRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalStageInstanceId InstanceId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalStageModelBase* Model;
    
    PAL_API FPalStageModelRepInfo();
};

