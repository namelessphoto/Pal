#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "PocketpairConnectServerFunctionDelegate.h"
#include "PocketpairConnectServerFunction.generated.h"

class UPocketpairConnectServerFunction;
class UPocketpairUserSubsystem;

UCLASS()
class POCKETPAIRUSER_API UPocketpairConnectServerFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPocketpairConnectServerFunction Completed;
    
private:
    UPROPERTY()
    UPocketpairUserSubsystem* Subsystem;
    
public:
    UPocketpairConnectServerFunction();

    UFUNCTION(BlueprintCallable)
    static UPocketpairConnectServerFunction* ConnectServer(UPocketpairUserSubsystem* Target, const FString& Address, int32 Port, const FString& AdminPassword, const FString& ServerPassword, const FString& WorldGUID);
    
};

