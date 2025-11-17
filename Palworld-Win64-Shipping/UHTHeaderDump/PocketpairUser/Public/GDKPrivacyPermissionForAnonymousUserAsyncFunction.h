#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GDKPrivacyPermissionForAnonymousUserAsyncFunctionDelegate.h"
#include "GDKPrivacyPermissionForAnonymousUserAsyncFunction.generated.h"

UCLASS()
class UGDKPrivacyPermissionForAnonymousUserAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGDKPrivacyPermissionForAnonymousUserAsyncFunction Completed;
    
    UGDKPrivacyPermissionForAnonymousUserAsyncFunction();

};

