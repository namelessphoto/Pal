#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalBaseCampLevelMasterData.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampLevelMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Level;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 WorkerMaxNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BaseCampMaxNumInGuild;
    
    PAL_API FPalBaseCampLevelMasterData();
};

