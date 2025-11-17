#pragma once
#include "CoreMinimal.h"
#include "EPalAsyncSaveProcessState.h"
#include "PalAsyncSaveProcess.generated.h"

class USaveGame;

USTRUCT(BlueprintType)
struct FPalAsyncSaveProcess {
    GENERATED_BODY()
public:
    UPROPERTY()
    EPalAsyncSaveProcessState State;
    
    UPROPERTY()
    bool bPreDelegateSuccess;
    
    UPROPERTY(Transient)
    USaveGame* SaveObject;
    
    PAL_API FPalAsyncSaveProcess();
};

