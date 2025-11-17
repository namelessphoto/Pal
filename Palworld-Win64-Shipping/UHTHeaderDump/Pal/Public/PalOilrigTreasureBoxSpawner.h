#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalMapObjectOperationResult.h"
#include "EPalOilrigType.h"
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalLevelObjectActor.h"
#include "PalOilrigHandledActorInterface.h"
#include "Templates/SubclassOf.h"
#include "PalOilrigTreasureBoxSpawner.generated.h"

class AActor;
class APalMapObject;

UCLASS()
class PAL_API APalOilrigTreasureBoxSpawner : public APalLevelObjectActor, public IPalOilrigHandledActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool IsOnlyOneBox;
    
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_MapObjectData SpawnMapObjectId;
    
    UPROPERTY(EditAnywhere)
    FPalDataTableRowName_FieldLotteryNameData FieldLotteryName;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> OnlyOneBoxEmptyBoxActorClass;
    
private:
    UPROPERTY(Transient)
    EPalOilrigType SelfOilrigType;
    
    UPROPERTY(Transient)
    FGuid MapObjectModelInstanceId;
    
    UPROPERTY(Transient)
    AActor* MapObjectActor;
    
    UPROPERTY(Transient)
    AActor* OnlyOneEmptyBox;
    
public:
    APalOilrigTreasureBoxSpawner(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnWorldMapObjectSpawnable_ServerInternal();
    
    UFUNCTION()
    void OnOpenTreasureBox();
    
    UFUNCTION()
    void OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result);
    
    UFUNCTION()
    void OnFinishedSpawningMapObjectActor(APalMapObject* MapObject);
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsSpawnedGoalBox();
    

    // Fix for true pure virtual functions not being implemented
};

