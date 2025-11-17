#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EAIRequestPriority -FallbackName=EAIRequestPriority
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EPawnActionResult -FallbackName=EPawnActionResult
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=PawnAction_BlueprintBase -FallbackName=PawnAction_BlueprintBase
#include "EPalAIActionCategory.h"
#include "EPalMovementSpeedType.h"
#include "PalAIActionDynamicParameter.h"
#include "Templates/SubclassOf.h"
#include "PalAIActionBase.generated.h"

class AController;
class APalAIController;
class APalCharacter;
class APawn;
class UObject;
class UPalAIActionBase;
class UPalAIActionComponent;
class UPalActionComponent;
class UPalCharacterParameterComponent;
class UPawnAction;
class UPawnActionsComponent;

UCLASS(EditInlineNew)
class UPalAIActionBase : public UPawnAction_BlueprintBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionDelegate, UPalAIActionBase*, action);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActionByDelegate, UPalAIActionBase*, action, const UPawnAction*, byAction);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsAutoStopBehaviorTree;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalAIActionCategory AiActionCategory;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FPalAIActionDynamicParameter DynamicParameter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<EAIRequestPriority> DefaultPriority;
    
    UPROPERTY(BlueprintAssignable)
    FOnActionDelegate OnStartActionDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnActionByDelegate OnPauseActionDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnActionDelegate OnResumeActionDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnActionDelegate OnFinishActionDelegate;
    
    UPalAIActionBase();

    UFUNCTION(BlueprintCallable)
    void SetWalkSpeedByMaxSpeed_ForAIAction(const float MaxSpeed, const EPalMovementSpeedType DefaultMoveSpeedType);
    
    UFUNCTION(BlueprintCallable)
    void SetWalkSpeed_ForAIAction(EPalMovementSpeedType MoveSpeedType);
    
    UFUNCTION(BlueprintCallable)
    UPalAIActionBase* SetAIActionClassParameter(TSubclassOf<UPalAIActionBase> NewActionClass, FPalAIActionDynamicParameter Parameter);
    
    UFUNCTION(BlueprintCallable)
    UPalAIActionBase* PushChildActionByClass(TSubclassOf<UPalAIActionBase> NewActionClass, FPalAIActionDynamicParameter Parameter);
    
    UFUNCTION(BlueprintCallable)
    bool PushChildAction(UPawnAction* action);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChildActionFinished(UPawnAction* action, TEnumAsByte<EPawnActionResult> WithResult);
    
    UFUNCTION(BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintPure)
    FString GetSimpleName() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TEnumAsByte<EAIRequestPriority> GetRequestPriority() const;
    
    UFUNCTION(BlueprintPure)
    APalAIController* GetPalAIController() const;
    
    UFUNCTION(BlueprintPure)
    UPawnActionsComponent* GetOwnerComponent();
    
    UFUNCTION(BlueprintPure)
    AController* GetController() const;
    
    UFUNCTION(BlueprintPure)
    UPalCharacterParameterComponent* GetCharacterParameter() const;
    
    UFUNCTION(BlueprintPure)
    APalCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintPure)
    UPalAIActionComponent* GetAIActionComponent() const;
    
    UFUNCTION(BlueprintPure)
    UPalActionComponent* GetActionComponent() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPawnAction* CreateActionInstanceFixName(UObject* WorldContextObject, TSubclassOf<UPawnAction> actionClass, FName ActionName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ActionAbort(APawn* ControlledPawn);
    
};

