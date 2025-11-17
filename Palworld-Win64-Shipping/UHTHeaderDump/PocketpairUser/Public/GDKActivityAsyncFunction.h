#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GDKActivityAsyncFunctionDelegate.h"
#include "GDKActivityAsyncFunction.generated.h"

class UGDKActivityAsyncFunction;
class UPocketpairUserSubsystem;

UCLASS()
class POCKETPAIRUSER_API UGDKActivityAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGDKActivityAsyncFunction Completed;
    
    UGDKActivityAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static UGDKActivityAsyncFunction* GDKActivityAsyncFunction(UPocketpairUserSubsystem* Target, const FString& ConnectionString, int32 MaxPlayerNum, int32 CurrentPlayerNum, bool bPublicSession);
    
};

