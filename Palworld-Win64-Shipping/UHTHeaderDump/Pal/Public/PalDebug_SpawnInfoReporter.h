#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalDebug_SpawnInfoReporter.generated.h"

class APalNPCSpawnerBase;

UCLASS()
class APalDebug_SpawnInfoReporter : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<APalNPCSpawnerBase*> CacheSpawner;
    
public:
    APalDebug_SpawnInfoReporter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    FString GetDebugInfoString(APalNPCSpawnerBase* Spawner);
    
};

