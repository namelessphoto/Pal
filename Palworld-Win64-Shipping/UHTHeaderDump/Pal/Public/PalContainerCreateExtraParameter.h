#pragma once
#include "CoreMinimal.h"
#include "EPalContainerOperationRestrictType.h"
#include "PalContainerCreateExtraParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalContainerCreateExtraParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bIsWatchAllPlayer;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsSyncEnable;
    
    UPROPERTY()
    bool bIgnoreOnSave;
    
    UPROPERTY(BlueprintReadWrite)
    EPalContainerOperationRestrictType OperationRestrictType;
    
    PAL_API FPalContainerCreateExtraParameter();
};

