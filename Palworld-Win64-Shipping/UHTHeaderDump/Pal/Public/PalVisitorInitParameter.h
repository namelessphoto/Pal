#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalIVisitorNPCAction.h"
#include "PalVisitorInitParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalVisitorInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector GoalLocation;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ReturnTimeMinutes;
    
    UPROPERTY(BlueprintReadWrite)
    int32 WalkAreaSplitNum;
    
    UPROPERTY(BlueprintReadWrite)
    EPalIVisitorNPCAction ActionTimeLimit;
    
    UPROPERTY(BlueprintReadWrite)
    FVector FormationOffset;
    
    PAL_API FPalVisitorInitParameter();
};

