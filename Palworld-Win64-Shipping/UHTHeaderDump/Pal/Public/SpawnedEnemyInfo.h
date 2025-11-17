#pragma once
#include "CoreMinimal.h"
#include "EPalEnemySpawnActorType.h"
#include "SpawnedEnemyInfo.generated.h"

class AActor;

USTRUCT()
struct FSpawnedEnemyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AActor* SelfActor;
    
    UPROPERTY(Transient)
    EPalEnemySpawnActorType WeaponType;
    
    UPROPERTY(Transient)
    AActor* TargetActor;
    
    PAL_API FSpawnedEnemyInfo();
};

