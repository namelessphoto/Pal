#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "PalBaseCampWorkDirectorBattleDefenseModelStashInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampWorkDirectorBattleDefenseModelStashInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FDateTime StashAtTime;
    
    PAL_API FPalBaseCampWorkDirectorBattleDefenseModelStashInfo();
};

