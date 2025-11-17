#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GDKPrivacyPermissionAsyncFunctionDelegate.h"
#include "GDKPrivacyPermissionAsyncFunction.generated.h"

UCLASS()
class UGDKPrivacyPermissionAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGDKPrivacyPermissionAsyncFunction Completed;
    
    UGDKPrivacyPermissionAsyncFunction();

};

