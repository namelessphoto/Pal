#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalCharacterList.h"
#include "PalCharacterSpatialGrid.h"
#include "PalObjectCollectorMapObjectSpawnerId.h"
#include "PalWorldSubsystem.h"
#include "PalObjectCollector.generated.h"

class APalCharacter;
class APalMapObjectSpawnerBase;

UCLASS(Config=Game)
class UPalObjectCollector : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<APalCharacter*> PalCharacter_All;
    
    UPROPERTY(Transient)
    TArray<APalCharacter*> PalCharacter_NPC;
    
    UPROPERTY(Transient)
    TArray<APalCharacter*> PalCharacter_Player;
    
    UPROPERTY(Transient)
    FPalCharacterSpatialGrid PalCharacterGrid_All;
    
    UPROPERTY(Transient)
    FPalCharacterSpatialGrid PalCharacterGrid_NPC;
    
    UPROPERTY(Transient)
    FPalCharacterSpatialGrid PalCharacterGrid_Player;
    
    UPROPERTY(Transient)
    TMap<FPalObjectCollectorMapObjectSpawnerId, APalMapObjectSpawnerBase*> MapObjectSpawnerMap;
    
    UPROPERTY(Transient)
    TMap<APalCharacter*, FPalCharacterList> NearestCharacter_FromPlayer;
    
    UPROPERTY(Transient)
    TSet<APalMapObjectSpawnerBase*> NearestSpawnerBase;
    
    UPROPERTY(Transient)
    TMap<APalCharacter*, FPalCharacterList> CalculationNearestCharacter_FromPlayer;
    
    UPROPERTY(Transient)
    TSet<APalMapObjectSpawnerBase*> CalculationNearSpawnerBase_FromPlayer;
    
    UPROPERTY(Transient)
    TSet<APalMapObjectSpawnerBase*> CalculationNearSpawnerBase_FromBaseCamp;
    
    UPROPERTY(Transient)
    TArray<FVector> BaseCampLocationList;
    
    UPROPERTY(Transient)
    bool bIsUpdateBaseCamp;
    
    UPROPERTY(Transient)
    bool bShouldRecalculateNearSpawn_RegisteredSpawnerInsideBaseCamp;
    
    UPROPERTY(Config)
    float NearStartDistanceForSpawnerBase;
    
    UPROPERTY(Config)
    float NearEndDistanceForSpawnerBase;
    
    UPROPERTY(Config)
    float NearDistanceForSpawnerBaseFromBaseCamp;
    
public:
    UPalObjectCollector();

private:
    UFUNCTION()
    void OnRemoveBaseCampModel_ServerInternal(const FGuid BaseCampId);
    
    UFUNCTION()
    void OnCreateBaseCampModel_ServerInternal(const FGuid BaseCampId);
    
};

