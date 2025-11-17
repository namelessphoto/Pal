#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AsyncHTTPRequestFunctionDelegate.h"
#include "HTTPRequestAsyncFunction.generated.h"

class UHTTPRequestAsyncFunction;
class UPocketpairUserSubsystem;

UCLASS()
class POCKETPAIRUSER_API UHTTPRequestAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncHTTPRequestFunction Completed;
    
    UHTTPRequestAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static UHTTPRequestAsyncFunction* HTTPRequestAsyncFunction(UPocketpairUserSubsystem* Target, const FString& URL, const FString& Verb);
    
};

