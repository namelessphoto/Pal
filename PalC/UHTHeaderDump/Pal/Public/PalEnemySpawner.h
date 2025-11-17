#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalEnemySpawnActorType.h"
#include "EPalEnemySpawnDefaultAction.h"
#include "PalEnemySpawner.generated.h"

UCLASS(Abstract)
class PAL_API APalEnemySpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    EPalEnemySpawnActorType EnemyActorType;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    EPalEnemySpawnDefaultAction DefaultAction;
    
    APalEnemySpawner(const FObjectInitializer& ObjectInitializer);

};

