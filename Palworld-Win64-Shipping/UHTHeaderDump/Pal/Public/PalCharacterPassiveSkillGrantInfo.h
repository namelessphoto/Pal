#pragma once
#include "CoreMinimal.h"
#include "PalCharacterPassiveSkillGrantInfo.generated.h"

USTRUCT()
struct FPalCharacterPassiveSkillGrantInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FName> IgnoreIdList;
    
    PAL_API FPalCharacterPassiveSkillGrantInfo();
};

