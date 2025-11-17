#pragma once
#include "CoreMinimal.h"
#include "TargetAbleInfoForEnemy.generated.h"

class AActor;

USTRUCT()
struct FTargetAbleInfoForEnemy {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AActor* SelfActor;
    
    UPROPERTY(Transient)
    int32 DuplicateNum;
    
    UPROPERTY(Transient)
    float ThreatLevel_OnlyCharacterParam;
    
    PAL_API FTargetAbleInfoForEnemy();
};

