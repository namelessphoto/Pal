#pragma once
#include "CoreMinimal.h"
#include "EPalLogContentToneType.h"
#include "EPalLogType.h"
#include "PalInstanceID.h"
#include "PalBaseCampWorkerMovementLogDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampWorkerMovementLogDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FPalInstanceID WorkerInstanceID;
    
    UPROPERTY(BlueprintReadWrite)
    EPalLogType Type;
    
    UPROPERTY(BlueprintReadWrite)
    EPalLogContentToneType ToneType;
    
    UPROPERTY(BlueprintReadWrite)
    FName TargetMapObjectMasterDataId;
    
    PAL_API FPalBaseCampWorkerMovementLogDisplayData();
};

