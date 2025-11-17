#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InteractDelegateDelegate.h"
#include "InteractSelfDelegateDelegate.h"
#include "InteractTriggerDelegateDelegate.h"
#include "InteractTriggeringDelegateDelegate.h"
#include "InteractingDelegateDelegate.h"
#include "PalInteractDelegates.generated.h"

UCLASS(Deprecated, NotPlaceable)
class UDEPRECATED_PalInteractDelegates : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInteractSelfDelegate OnEnableTriggerInteract;
    
    UPROPERTY(BlueprintAssignable)
    FInteractDelegate OnInteractBegin;
    
    UPROPERTY(BlueprintAssignable)
    FInteractDelegate OnInteractEnd;
    
    UPROPERTY(BlueprintAssignable)
    FInteractingDelegate OnInteracting;
    
    UPROPERTY(BlueprintAssignable)
    FInteractTriggerDelegate OnTriggerInteract;
    
    UPROPERTY(BlueprintAssignable)
    FInteractTriggerDelegate OnStartTriggerInteract;
    
    UPROPERTY(BlueprintAssignable)
    FInteractTriggerDelegate OnEndTriggerInteract;
    
    UPROPERTY(BlueprintAssignable)
    FInteractTriggeringDelegate OnTriggeringInteract;
    
    UDEPRECATED_PalInteractDelegates();

};

