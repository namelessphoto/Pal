#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GDKInviteAsyncFunctionDelegate.h"
#include "GDKInviteAsyncFunction.generated.h"

class UGDKInviteAsyncFunction;
class UPocketpairUserSubsystem;

UCLASS()
class UGDKInviteAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGDKInviteAsyncFunction Completed;
    
    UGDKInviteAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static UGDKInviteAsyncFunction* GDKInviteAsyncFunction(UPocketpairUserSubsystem* Target);
    
};

