#pragma once
#include "CoreMinimal.h"
#include "AIDynamicParam.h"
#include "BTTask_BlackboardBase.h"
#include "BlackboardKeySelector.h"
#include "EEnvQueryRunMode.h"
#include "EQSParametrizedQueryExecutionRequest.h"
#include "EnvNamedValue.h"
#include "BTTask_RunEQSQuery.generated.h"

class UEnvQuery;

UCLASS()
class AIMODULE_API UBTTask_RunEQSQuery : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    UEnvQuery* QueryTemplate;
    
    UPROPERTY()
    TArray<FEnvNamedValue> QueryParams;
    
    UPROPERTY()
    TArray<FAIDynamicParam> QueryConfig;
    
    UPROPERTY()
    TEnumAsByte<EEnvQueryRunMode> RunMode;
    
    UPROPERTY()
    FBlackboardKeySelector EQSQueryBlackboardKey;
    
    UPROPERTY(EditAnywhere)
    bool bUseBBKey;
    
    UPROPERTY(EditAnywhere)
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateBBOnFail;
    
    UBTTask_RunEQSQuery();

};

