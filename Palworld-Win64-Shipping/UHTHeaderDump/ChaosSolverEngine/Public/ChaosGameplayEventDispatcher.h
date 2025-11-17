#pragma once
#include "CoreMinimal.h"
#include "BreakEventCallbackWrapper.h"
#include "ChaosEventListenerComponent.h"
#include "ChaosHandlerSet.h"
#include "CrumblingEventCallbackWrapper.h"
#include "RemovalEventCallbackWrapper.h"
#include "ChaosGameplayEventDispatcher.generated.h"

class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CHAOSSOLVERENGINE_API UChaosGameplayEventDispatcher : public UChaosEventListenerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations;
    
    UPROPERTY()
    TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations;
    
    UPROPERTY()
    TMap<UPrimitiveComponent*, FRemovalEventCallbackWrapper> RemovalEventRegistrations;
    
    UPROPERTY()
    TMap<UPrimitiveComponent*, FCrumblingEventCallbackWrapper> CrumblingEventRegistrations;
    
public:
    UChaosGameplayEventDispatcher(const FObjectInitializer& ObjectInitializer);

};

