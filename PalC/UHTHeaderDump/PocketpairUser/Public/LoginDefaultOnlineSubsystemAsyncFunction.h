#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AsyncCompletedLoginFunctionDelegate.h"
#include "LoginDefaultOnlineSubsystemAsyncFunction.generated.h"

class ULoginDefaultOnlineSubsystemAsyncFunction;
class UPocketpairUserSubsystem;

UCLASS()
class POCKETPAIRUSER_API ULoginDefaultOnlineSubsystemAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncCompletedLoginFunction Completed;
    
    ULoginDefaultOnlineSubsystemAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static ULoginDefaultOnlineSubsystemAsyncFunction* LoginDefaultAsyncFunction(UPocketpairUserSubsystem* Target);
    
};

