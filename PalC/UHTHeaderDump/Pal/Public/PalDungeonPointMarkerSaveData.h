#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "GameDateTime.h"
#include "PalDungeonPointMarkerSaveData.generated.h"

USTRUCT()
struct FPalDungeonPointMarkerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid MarkerPointId;
    
    UPROPERTY()
    FGameDateTime NextRespawnGameTime;
    
    UPROPERTY()
    FGuid ConnectedDungeonInstanceId;
    
    PAL_API FPalDungeonPointMarkerSaveData();
};

