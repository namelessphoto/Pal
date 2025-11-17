#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalBuildObjectCharacterTeamMissionPerformanceWaitData.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectCharacterTeamMissionPerformanceWaitData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName CharacterID;
    
    UPROPERTY()
    FVector SkeletalMeshScale;
    
    PAL_API FPalBuildObjectCharacterTeamMissionPerformanceWaitData();
};

