#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "ActionDynamicParameter.h"
#include "EPalActionType.h"
#include "Templates/SubclassOf.h"
#include "PalActionComponent.generated.h"

class AActor;
class APalCharacter;
class UPalActionBase;
class UPalActionComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalActionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAllActionFinishDelegate, const UPalActionComponent*, ActionComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActionStartDelegate, const UPalActionBase*, action);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActionNotify, const UPalActionBase*, action, FName, NotifyName);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalActionType, TSubclassOf<UPalActionBase>> ActionMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalActionType, TSubclassOf<AActor>> ActionToolOverrideMap;
    
    UPROPERTY(BlueprintAssignable)
    FAllActionFinishDelegate OnAllActionFinishDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FActionStartDelegate OnActionBeginDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FActionNotify OnActionNotifyDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalActionBase* CurrentAction;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<UPalActionBase*> ActionQueue;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<UPalActionBase*> TerminateWaitActionList;
    
public:
    UPalActionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UPalActionBase* PlayActionParameter(FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass);
    
    UFUNCTION(BlueprintCallable)
    UPalActionBase* PlayActionLocationByType(FVector Location, EPalActionType Type);
    
    UFUNCTION(BlueprintCallable)
    UPalActionBase* PlayActionLocation(FVector Location, TSubclassOf<UPalActionBase> actionClass);
    
    UFUNCTION(BlueprintCallable)
    UPalActionBase* PlayActionByTypeParameter(FActionDynamicParameter Param, EPalActionType Type);
    
    UFUNCTION(BlueprintCallable)
    UPalActionBase* PlayActionByType(AActor* ActionTarget, EPalActionType Type);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void PlayAction_ToALL(FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass, int32 issuerID);
    
public:
    UFUNCTION(BlueprintCallable)
    UPalActionBase* PlayAction_LocalOnly(FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass);
    
private:
    UFUNCTION()
    UPalActionBase* PlayAction_Internal(FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass);
    
public:
    UFUNCTION(BlueprintCallable)
    UPalActionBase* PlayAction(AActor* ActionTarget, TSubclassOf<UPalActionBase> actionClass);
    
private:
    UFUNCTION()
    void OnOwnerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> reasonType);
    
public:
    UFUNCTION()
    void OnCompleteCharacter(APalCharacter* InCharacter);
    
    UFUNCTION(BlueprintPure)
    bool IsReservedActionClass(TSubclassOf<UPalActionBase> actionClass) const;
    
    UFUNCTION(BlueprintPure)
    bool IsActiveActionType(EPalActionType ActionType, bool bIsCheckQueue) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAction(EPalActionType Type);
    
    UFUNCTION(BlueprintPure)
    EPalActionType GetCurrentActionType(bool bIsCheckQueue) const;
    
    UFUNCTION(BlueprintPure)
    UPalActionBase* GetCurrentAction() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetActionTool(EPalActionType ActionType, TSubclassOf<AActor> InDefaultClass) const;
    
private:
    UFUNCTION(Reliable, Server)
    void CancelAllAction_ToServer(int32 ID);
    
    UFUNCTION(NetMulticast, Reliable)
    void CancelAllAction_ToALL(int32 ID);
    
    UFUNCTION()
    void CancelAllAction_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelAllAction();
    
    UFUNCTION(BlueprintCallable)
    void CancelActionByType(EPalActionType Type);
    
private:
    UFUNCTION(Reliable, Server)
    void CancelAction_ToServer(int32 ID, FGuid ActionID);
    
    UFUNCTION(NetMulticast, Reliable)
    void CancelAction_ToALL(int32 ID, FGuid ActionID);
    
    UFUNCTION()
    void CancelAction_Internal(FGuid ActionID);
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelAction(UPalActionBase* action);
    
    UFUNCTION()
    void BeginPlay();
    
    UFUNCTION(BlueprintPure)
    bool ActionIsEmpty();
    
};

