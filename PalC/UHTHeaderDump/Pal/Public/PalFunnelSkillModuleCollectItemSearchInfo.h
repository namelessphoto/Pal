#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalFunnelSkillModuleCollectItemSearchInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalFunnelSkillModuleCollectItemSearchInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    float Distance;
    
    UPROPERTY()
    float ElapsedTime;
    
    PAL_API FPalFunnelSkillModuleCollectItemSearchInfo();
};

