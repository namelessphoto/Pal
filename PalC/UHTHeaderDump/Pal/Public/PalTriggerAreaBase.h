#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalEventNotifyTriggerHitDelegateDelegate.h"
#include "PalTriggerAreaBase.generated.h"

UCLASS()
class APalTriggerAreaBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FPalEventNotifyTriggerHitDelegate OnTriggerHitBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FPalEventNotifyTriggerHitDelegate OnTriggerHitEndDelegate;
    
private:
    UPROPERTY(VisibleAnywhere)
    FGuid InstanceId;
    
public:
    APalTriggerAreaBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    FGuid GetInstanceId();
    
};

