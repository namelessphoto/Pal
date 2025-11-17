#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalDungeonGimmickTriggerParameter.generated.h"

class AActor;

USTRUCT()
struct FPalDungeonGimmickTriggerParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid TriggerLevelInstanceId;
    
    UPROPERTY()
    AActor* TriggerActor;
    
    PAL_API FPalDungeonGimmickTriggerParameter();
};

