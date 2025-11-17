#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalDebugAutoBaseCampBuilderWorker.generated.h"

USTRUCT(BlueprintType)
struct FPalDebugAutoBaseCampBuilderWorker {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPalDataTableRowName_PalMonsterData MonsterId;
    
    UPROPERTY(EditAnywhere)
    int32 Level;
    
    UPROPERTY(EditAnywhere)
    int32 Num;
    
    PAL_API FPalDebugAutoBaseCampBuilderWorker();
};

