#pragma once
#include "CoreMinimal.h"
#include "EPalLogContentToneType.h"
#include "EPalLogType.h"
#include "PalGuildLabCompleteLogDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FPalGuildLabCompleteLogDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName CompletedResearchId;
    
    UPROPERTY(BlueprintReadWrite)
    EPalLogType Type;
    
    UPROPERTY(BlueprintReadWrite)
    EPalLogContentToneType ToneType;
    
    PAL_API FPalGuildLabCompleteLogDisplayData();
};

