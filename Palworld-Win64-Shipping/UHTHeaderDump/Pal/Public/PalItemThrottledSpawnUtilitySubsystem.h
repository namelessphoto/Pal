#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "PalItemThrottledSpawnUtilitySubsystem.generated.h"

class UPalItemThrottledSpawnRequest;
class UPalMapObjectSpawnRequestHandler;

UCLASS()
class UPalItemThrottledSpawnUtilitySubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UPalItemThrottledSpawnRequest*> SpawnQueue;
    
    UPROPERTY()
    TArray<UPalMapObjectSpawnRequestHandler*> ActiveSpawnedHandlers;
    
    UPROPERTY()
    TMap<uint64, int32> GridSpawnCounterMap;
    
    UPROPERTY()
    uint64 SpawnedItems;
    
    UPROPERTY()
    double ElapsedSpawnTime;
    
public:
    UPalItemThrottledSpawnUtilitySubsystem();

protected:
    UFUNCTION()
    int32 IncreaseGridSpawnCounter(const FVector& Location);
    
    UFUNCTION()
    uint64 GetGridKey(const FVector& Location) const;
    
    UFUNCTION()
    int32 GetCurrentFrameSpawnLimit() const;
    
    UFUNCTION()
    int32 DecreaseGridSpawnCounter(const FVector& Location);
    
    UFUNCTION()
    bool CanSpawnInGrid(const FVector& Location) const;
    
};

