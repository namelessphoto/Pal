#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampTaskData_WorkerNum.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampTaskData_WorkerNum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName incompleteMsgID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName completeMsgID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 requireNum;
    
    PAL_API FPalBaseCampTaskData_WorkerNum();
};

