#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AsyncCompletedSwitchUserUIFunctionDelegate.h"
#include "SwitchUserUIDefaultOnlineSubsystemAsyncFunction.generated.h"

class UPocketpairUserSubsystem;
class USwitchUserUIDefaultOnlineSubsystemAsyncFunction;

UCLASS()
class POCKETPAIRUSER_API USwitchUserUIDefaultOnlineSubsystemAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncCompletedSwitchUserUIFunction Completed;
    
    USwitchUserUIDefaultOnlineSubsystemAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static USwitchUserUIDefaultOnlineSubsystemAsyncFunction* SwitchUserUIAsyncFunction(UPocketpairUserSubsystem* Target);
    
};

