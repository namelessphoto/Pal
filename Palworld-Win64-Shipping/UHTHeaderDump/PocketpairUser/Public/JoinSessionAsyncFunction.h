#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AsyncCompletedJoinSessionFunctionDelegate.h"
#include "JoinSessionAsyncFunction.generated.h"

class APlayerController;

UCLASS()
class POCKETPAIRUSER_API UJoinSessionAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncCompletedJoinSessionFunction Completed;
    
private:
    UPROPERTY()
    APlayerController* Controller;
    
public:
    UJoinSessionAsyncFunction();

};

