#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AsyncCompletedFindSessionsFunctionDelegate.h"
#include "FindSessionsAsyncFunction.generated.h"

class UFindSessionsAsyncFunction;
class UPocketpairUserSubsystem;

UCLASS()
class POCKETPAIRUSER_API UFindSessionsAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncCompletedFindSessionsFunction Completed;
    
    UFindSessionsAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static UFindSessionsAsyncFunction* FindSessionsAsyncFunction(UPocketpairUserSubsystem* Target, bool IsDedicatedServer, const FString& InviteCode, const FString& ServerType, const FString& Region, const int32 LessThanTime, const FString& WorldGUID, const FString& Namespace);
    
};

