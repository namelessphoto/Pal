#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectCharacterTeamMissionPerformanceInProgressData.generated.h"

class UPalCharacterVisualSkeletalMeshComponent;

USTRUCT()
struct FPalBuildObjectCharacterTeamMissionPerformanceInProgressData {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UPalCharacterVisualSkeletalMeshComponent* CharacterVisual;
    
    UPROPERTY()
    float ProgressTime;
    
    PAL_API FPalBuildObjectCharacterTeamMissionPerformanceInProgressData();
};

