#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalMapObjectOperationResult.h"
#include "PalRandomIncidentMapObjectSpawner.generated.h"

UCLASS()
class PAL_API APalRandomIncidentMapObjectSpawner : public AActor {
    GENERATED_BODY()
public:
    APalRandomIncidentMapObjectSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnEgg(const FName MonsterId, const FVector& SpawnOffset);
    
    UFUNCTION(BlueprintCallable)
    void SpawnDropItem(FName ItemId, int32 DropNum, const FVector& SpawnOffset);
    
private:
    UFUNCTION()
    void OnFinishedSpawningEgg(FGuid InstanceId, const EPalMapObjectOperationResult Result);
    
    UFUNCTION()
    void OnFinishedSpawningDropItem(FGuid InstanceId, const EPalMapObjectOperationResult Result);
    
};

