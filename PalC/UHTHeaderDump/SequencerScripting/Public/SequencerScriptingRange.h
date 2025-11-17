#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "SequencerScriptingRange.generated.h"

USTRUCT(BlueprintType)
struct FSequencerScriptingRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    uint8 bHasStart: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bHasEnd: 1;
    
    UPROPERTY(BlueprintReadWrite)
    int32 InclusiveStart;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ExclusiveEnd;
    
    UPROPERTY()
    FFrameRate InternalRate;
    
    SEQUENCERSCRIPTING_API FSequencerScriptingRange();
};

