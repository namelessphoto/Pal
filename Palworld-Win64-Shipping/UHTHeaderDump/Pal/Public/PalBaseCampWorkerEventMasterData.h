#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalBaseCampWorkerEventPriority.h"
#include "EPalLogContentToneType.h"
#include "EPalLogPriority.h"
#include "PalBaseCampWorkerEventMasterData.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampWorkerEventMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Debug_DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalBaseCampWorkerEventPriority Priority;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 TriggerSanity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowInterruptRecoverHungry;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowInterruptSleep;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAssignableWork;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAssignableFixedWork;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 TriggerSkipCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalLogPriority logPriority;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalLogContentToneType LogTone;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool Invalid;
    
    PAL_API FPalBaseCampWorkerEventMasterData();
};

