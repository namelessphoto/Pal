#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EAIRequestPriority.h"
#include "EPawnActionAbortState.h"
#include "PawnActionEvent.h"
#include "PawnActionStack.h"
#include "PawnActionsComponent.generated.h"

class APawn;
class UObject;
class UPawnAction;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UPawnActionsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    APawn* ControlledPawn;
    
    UPROPERTY()
    TArray<FPawnActionStack> ActionStacks;
    
    UPROPERTY()
    TArray<FPawnActionEvent> ActionEvents;
    
    UPROPERTY(Transient)
    UPawnAction* CurrentAction;
    
public:
    UPawnActionsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool K2_PushAction(UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, UObject* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_PerformAction(APawn* Pawn, UPawnAction* action, TEnumAsByte<EAIRequestPriority> Priority);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(UPawnAction* ActionToAbort);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPawnActionAbortState> K2_AbortAction(UPawnAction* ActionToAbort);
    
};

