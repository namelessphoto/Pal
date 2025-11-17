#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "PalDungeonEntrance.h"
#include "PalLevelObjectInterface.h"
#include "Templates/SubclassOf.h"
#include "PalDungeonFixedEntrance.generated.h"

class APalNPCSpawnerBase;
class UDataLayerAsset;
class UPalInteractLockSettingComponent;

UCLASS()
class PAL_API APalDungeonFixedEntrance : public APalDungeonEntrance, public IPalLevelObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalInteractLockSettingComponent* InteractLockSettingComponent;
    
private:
    UPROPERTY(NonPIEDuplicateTransient, VisibleInstanceOnly)
    FGuid LevelObjectInstanceId;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle DungeonNameRowHandle;
    
    UPROPERTY(EditInstanceOnly, NonPIEDuplicateTransient)
    UDataLayerAsset* DataLayerAsset;
    
    UPROPERTY(EditInstanceOnly, NonPIEDuplicateTransient)
    TSoftClassPtr<APalNPCSpawnerBase> EnemySpawnerSoftClass;
    
    UPROPERTY(EditAnywhere, NonPIEDuplicateTransient)
    float RespawnCoolTimeMinutesAfterBossDefeated;
    
    UPROPERTY(Transient)
    TSubclassOf<APalNPCSpawnerBase> EnemySpawnerClass;
    
public:
    APalDungeonFixedEntrance(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    FGuid GetLevelObjectInstanceId() const;
    
    UFUNCTION(BlueprintPure)
    TSoftClassPtr<APalNPCSpawnerBase> GetEnemySpawnerSoftClass() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<APalNPCSpawnerBase> GetEnemySpawner() const;
    
    UFUNCTION(BlueprintPure)
    UDataLayerAsset* GetDataLayerAsset() const;
    

    // Fix for true pure virtual functions not being implemented
};

