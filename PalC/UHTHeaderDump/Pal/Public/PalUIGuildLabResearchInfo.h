#pragma once
#include "CoreMinimal.h"
#include "PalLabResearchMasterData.h"
#include "PalUIGuildLabResearchInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIGuildLabResearchInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName ResearchId;
    
    UPROPERTY(BlueprintReadOnly)
    FPalLabResearchMasterData MasterData;
    
    UPROPERTY(BlueprintReadOnly)
    int32 RequiredWorkSuitabilityRank;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCompleted;
    
    PAL_API FPalUIGuildLabResearchInfo();
};

