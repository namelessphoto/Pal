#pragma once
#include "CoreMinimal.h"
#include "PalLogInfo_Skill.generated.h"

USTRUCT(BlueprintType)
struct FPalLogInfo_Skill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FText SkillName;
    
    UPROPERTY(BlueprintReadWrite)
    FText CharacterName;
    
    UPROPERTY(BlueprintReadWrite)
    FText Value;
    
    PAL_API FPalLogInfo_Skill();
};

