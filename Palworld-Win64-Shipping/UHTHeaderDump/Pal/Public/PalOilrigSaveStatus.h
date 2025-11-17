#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalOilrigSaveStatus.generated.h"

USTRUCT(BlueprintType)
struct FPalOilrigSaveStatus {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGuid> DestroyedCannon;
    
    UPROPERTY()
    TArray<FGuid> DestroyedGasTank;
    
    UPROPERTY()
    TArray<FGuid> WipedOutEnemySpawner;
    
    UPROPERTY()
    TArray<FGuid> OpenedTreasureBoxSpawner;
    
    UPROPERTY()
    int32 GoalTreasureBoxSpawnerIndex;
    
    UPROPERTY()
    bool Alarm;
    
    UPROPERTY()
    bool Clear;
    
    UPROPERTY()
    float ResetTimer;
    
    UPROPERTY()
    bool IsMachineSpawned;
    
    UPROPERTY()
    bool IsMachineDestroyed;
    
    PAL_API FPalOilrigSaveStatus();
};

