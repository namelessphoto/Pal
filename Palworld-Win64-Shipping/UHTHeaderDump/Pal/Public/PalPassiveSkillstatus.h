#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveSkillState.h"
#include "EPalPassiveTriggerType.h"
#include "PalPassiveSkillstatus.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveSkillstatus {
    GENERATED_BODY()
public:
    UPROPERTY()
    EPalPassiveSkillState State;
    
    UPROPERTY()
    float ElapsedTime;
    
    UPROPERTY()
    TArray<FName> Flags;
    
    UPROPERTY()
    EPalPassiveTriggerType TriggerType;
    
    PAL_API FPalPassiveSkillstatus();
};

