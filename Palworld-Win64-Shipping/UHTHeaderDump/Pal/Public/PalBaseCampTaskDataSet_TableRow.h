#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalBaseCampTaskDataSet_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampTaskDataSet_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 Level;
    
    UPROPERTY(BlueprintReadOnly)
    int32 workerNum;
    
    UPROPERTY(BlueprintReadOnly)
    FName WorkerNum_IncompleteMsgID;
    
    UPROPERTY(BlueprintReadOnly)
    FName WorkerNum_CompleteMsgID;
    
    UPROPERTY(BlueprintReadOnly)
    FName BuildObject1;
    
    UPROPERTY(BlueprintReadOnly)
    int32 BuildObjectNum1;
    
    UPROPERTY(BlueprintReadOnly)
    FName BuildObject1_IncompleteMsgID;
    
    UPROPERTY(BlueprintReadOnly)
    FName BuildObject1_CompleteMsgID;
    
    UPROPERTY(BlueprintReadOnly)
    FName BuildObject2;
    
    UPROPERTY(BlueprintReadOnly)
    int32 BuildObjectNum2;
    
    UPROPERTY(BlueprintReadOnly)
    FName BuildObject2_IncompleteMsgID;
    
    UPROPERTY(BlueprintReadOnly)
    FName BuildObject2_CompleteMsgID;
    
    UPROPERTY(BlueprintReadOnly)
    FName BuildObject3;
    
    UPROPERTY(BlueprintReadOnly)
    int32 BuildObjectNum3;
    
    UPROPERTY(BlueprintReadOnly)
    FName BuildObject3_IncompleteMsgID;
    
    UPROPERTY(BlueprintReadOnly)
    FName BuildObject3_CompleteMsgID;
    
    PAL_API FPalBaseCampTaskDataSet_TableRow();
};

