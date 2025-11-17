#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PalDungeonMarkerPointSpawnParameter.h"
#include "Templates/SubclassOf.h"
#include "PalDungeonMarkerPointData.generated.h"

class APalDungeonEntrance;

USTRUCT(BlueprintType)
struct FPalDungeonMarkerPointData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid MarkerPointId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FName> SpawnAreaIds;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FTransform Transform;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalDungeonMarkerPointSpawnParameter SpawnParameter;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TSubclassOf<APalDungeonEntrance> EntranceClass;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid ConnectedDungeonInstanceId;
    
    PAL_API FPalDungeonMarkerPointData();
};

