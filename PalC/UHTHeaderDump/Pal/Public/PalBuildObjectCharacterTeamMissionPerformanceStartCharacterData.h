#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalTribeID.h"
#include "PalBuildObjectCharacterTeamMissionPerformanceStartCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectCharacterTeamMissionPerformanceStartCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY()
    EPalTribeID TribeId;
    
    UPROPERTY()
    FVector SkeletalMeshScale;
    
    PAL_API FPalBuildObjectCharacterTeamMissionPerformanceStartCharacterData();
};

