#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GDKPrivilegeAsyncFunctionDelegate.h"
#include "GDKPrivilegeAsyncFunction.generated.h"

UCLASS()
class UGDKPrivilegeAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGDKPrivilegeAsyncFunction Completed;
    
    UGDKPrivilegeAsyncFunction();

};

