#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SanitizeDisplayNameAsyncFunctionDelegate.h"
#include "SanitizeDisplayNameAsyncFunction.generated.h"

class UPocketpairUserSubsystem;
class USanitizeDisplayNameAsyncFunction;

UCLASS()
class POCKETPAIRUSER_API USanitizeDisplayNameAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSanitizeDisplayNameAsyncFunction Completed;
    
    USanitizeDisplayNameAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static USanitizeDisplayNameAsyncFunction* SanitizeDisplayNameAsyncFunction(UPocketpairUserSubsystem* Target, const FString& InString);
    
};

