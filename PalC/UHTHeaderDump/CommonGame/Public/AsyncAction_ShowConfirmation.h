#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "CommonMessagingResultMCDelegateDelegate.h"
#include "AsyncAction_ShowConfirmation.generated.h"

class UAsyncAction_ShowConfirmation;
class UCommonGameDialogDescriptor;
class ULocalPlayer;
class UObject;

UCLASS()
class UAsyncAction_ShowConfirmation : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCommonMessagingResultMCDelegate OnResult;
    
private:
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
    UPROPERTY(Transient)
    ULocalPlayer* TargetLocalPlayer;
    
    UPROPERTY(Transient)
    UCommonGameDialogDescriptor* Descriptor;
    
public:
    UAsyncAction_ShowConfirmation();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UAsyncAction_ShowConfirmation* ShowConfirmationYesNo(UObject* InWorldContextObject, FText Title, FText Message);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UAsyncAction_ShowConfirmation* ShowConfirmationOkCancel(UObject* InWorldContextObject, FText Title, FText Message);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UAsyncAction_ShowConfirmation* ShowConfirmationCustom(UObject* InWorldContextObject, UCommonGameDialogDescriptor* NewDescriptor);
    
};

