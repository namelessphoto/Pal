#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalBaseCampWorkerWalkAroundState.h"
#include "FloatCounter.h"
#include "PalBaseCampWorkerWalkAroundDynamicInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampWorkerWalkAroundDynamicInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalBaseCampWorkerWalkAroundState CurrentState;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector WalkAroundDestination;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFloatCounter WalkAroundTimeCounter;
    
    PAL_API FPalBaseCampWorkerWalkAroundDynamicInfo();
};

