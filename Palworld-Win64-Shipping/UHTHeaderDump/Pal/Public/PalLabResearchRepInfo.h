#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalLabResearchRepInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalLabResearchRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName ResearchId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float WorkAmount;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float RequiredWorkAmount;
    
    PAL_API FPalLabResearchRepInfo();
};

