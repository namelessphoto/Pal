#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AsyncCompletedCreateSessionFunctionDelegate.h"
#include "CreateSessionAsyncFunction.generated.h"

class UCreateSessionAsyncFunction;
class UPocketpairUserSubsystem;

UCLASS()
class POCKETPAIRUSER_API UCreateSessionAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncCompletedCreateSessionFunction Completed;
    
    UCreateSessionAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static UCreateSessionAsyncFunction* CreateSessionAsyncFunction(UPocketpairUserSubsystem* Target, bool IsDedicatedServer, int32 PublicConnections, const FString& InviteCode, const FString& ServerName, const FString& Desc, const FString& ServerAddress, int32 ServerPort, bool IsPassword, const FString& Version, const FString& ServerType, const FString& Region, const FString& Namespace, bool IsCrossPlay);
    
};

