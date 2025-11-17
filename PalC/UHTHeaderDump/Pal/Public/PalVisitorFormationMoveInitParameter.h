#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalVisitorFormationMoveInitParameter.generated.h"

class APalAIController;
class APalCharacter;

USTRUCT(BlueprintType)
struct FPalVisitorFormationMoveInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    APalAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite)
    APalCharacter* LeaderCharacter;
    
    UPROPERTY(BlueprintReadWrite)
    FVector GoalLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FVector FormationOffset;
    
    UPROPERTY(BlueprintReadWrite)
    float AdjustLocationSpeedRate;
    
    UPROPERTY(BlueprintReadWrite)
    float FormationMoveStopDistance;
    
    PAL_API FPalVisitorFormationMoveInitParameter();
};

