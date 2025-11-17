#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AsyncCompletedLoginEOSFunctionDelegate.h"
#include "LoginEOSAsyncFunction.generated.h"

class ULoginEOSAsyncFunction;
class UPocketpairUserSubsystem;

UCLASS()
class POCKETPAIRUSER_API ULoginEOSAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncCompletedLoginEOSFunction Completed;
    
    ULoginEOSAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static ULoginEOSAsyncFunction* LoginEOSAsyncFunction(UPocketpairUserSubsystem* Target);
    
};

