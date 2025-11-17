#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "EPalFarmSkillFruitsState.h"
#include "PalFarmSkillFruitsTreeGrowupProcessSet.generated.h"

USTRUCT(BlueprintType)
struct FPalFarmSkillFruitsTreeGrowupProcessSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EPalFarmSkillFruitsState State;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FComponentReference> TargetCompRefs;
    
    PAL_API FPalFarmSkillFruitsTreeGrowupProcessSet();
};

