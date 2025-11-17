#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalBuildObjectCharacterTeamMissionCharacterLoadProgress.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectCharacterTeamMissionCharacterLoadProgress {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bCompleteLoad;
    
    UPROPERTY()
    FVector SkeletalMeshScale;
    
    PAL_API FPalBuildObjectCharacterTeamMissionCharacterLoadProgress();
};

