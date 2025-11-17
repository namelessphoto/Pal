#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectCharacterTeamMissionPerformanceInProgressData.h"
#include "PalBuildObjectCharacterTeamMissionPerformanceInProgressDataArray.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectCharacterTeamMissionPerformanceInProgressDataArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    float CannotAddRemainTime;
    
    UPROPERTY()
    TArray<FPalBuildObjectCharacterTeamMissionPerformanceInProgressData> Array;
    
    PAL_API FPalBuildObjectCharacterTeamMissionPerformanceInProgressDataArray();
};

