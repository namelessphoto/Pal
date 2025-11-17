#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "PalCheckMultiplayRestrictionLatentOnCompletedDelegateDelegate.h"
#include "PalCheckMultiplayRestrictionLatent.generated.h"

class UObject;
class UPalCheckMultiplayRestrictionLatent;

UCLASS()
class PAL_API UPalCheckMultiplayRestrictionLatent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPalCheckMultiplayRestrictionLatentOnCompletedDelegate OnCompleted;
    
    UPalCheckMultiplayRestrictionLatent();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPalCheckMultiplayRestrictionLatent* PalCheckMultiplayRestrictionLatent(UObject* WorldContextObject);
    
};

