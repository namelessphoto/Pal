#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EAIRequestPriority -FallbackName=EAIRequestPriority
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=PawnActionsComponent -FallbackName=PawnActionsComponent
#include "EPalAIActionCategory.h"
#include "EPalMovementSpeedType.h"
#include "PalAIActionDynamicParameter.h"
#include "Templates/SubclassOf.h"
#include "PalAIActionComponent.generated.h"

class UObject;
class UPalAIActionBase;
class UPalAIActionCompositeBase;
class UPawnAction;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalAIActionComponent : public UPawnActionsComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleInstanceOnly)
    TArray<UPalAIActionCompositeBase*> ActionCompositeRoots;
    
public:
    UPalAIActionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TerminateCurrentActionByClass(TSubclassOf<UPalAIActionBase> actionClass);
    
    UFUNCTION(BlueprintCallable)
    void SetWalkSpeed_ForAIAction(EPalMovementSpeedType MoveSpeedType);
    
    UFUNCTION(BlueprintCallable)
    void SetRootComposite(UPalAIActionCompositeBase* NewCompositeAction, TEnumAsByte<EAIRequestPriority> Priority);
    
    UFUNCTION(BlueprintCallable)
    UPalAIActionBase* SetActionClassParameter(TSubclassOf<UPalAIActionBase> NewActionClass, FPalAIActionDynamicParameter Parameter);
    
    UFUNCTION(BlueprintCallable)
    void SetAction(UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, UObject* Instigator);
    
    UFUNCTION(BlueprintPure)
    bool IsActionEmpty();
    
    UFUNCTION(BlueprintPure)
    bool HasAction(const TSubclassOf<UPawnAction>& checkClass, TEnumAsByte<EAIRequestPriority> checkPriority) const;
    
    UFUNCTION(BlueprintPure)
    UPawnAction* GetCurrentTopParentAction_BP();
    
    UFUNCTION(BlueprintPure)
    EPalAIActionCategory GetCurrentAIActionCategory();
    
    UFUNCTION(BlueprintPure)
    UPawnAction* GetCurrentAction_BP();
    
    UFUNCTION(BlueprintPure)
    UPalAIActionCompositeBase* GetCompositeRoot(TEnumAsByte<EAIRequestPriority> Priority) const;
    
    UFUNCTION(BlueprintCallable)
    void CacheControlledPawn_BP();
    
    UFUNCTION(BlueprintCallable)
    void AllCancelPushedAction(const UObject* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void AllCancelActionPriorThanSoftScript(const UObject* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void AllCancelAction_Logic_HardScript_Reaction(const UObject* Instigator);
    
};

