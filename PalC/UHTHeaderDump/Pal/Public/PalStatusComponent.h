#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalStatusID.h"
#include "StatusDynamicParameter.h"
#include "Templates/SubclassOf.h"
#include "PalStatusComponent.generated.h"

class UPalStatusBase;
class UPalStatusComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalStatusComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRemoveStatus, const UPalStatusComponent*, StatusComponent, EPalStatusID, statusID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAddStatus, const UPalStatusComponent*, StatusComponent, EPalStatusID, statusID, UPalStatusBase*, Status);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalStatusID, TSubclassOf<UPalStatusBase>> StatusMap;
    
    UPROPERTY(BlueprintAssignable)
    FOnAddStatus OnAddStatus;
    
    UPROPERTY(BlueprintAssignable)
    FOnRemoveStatus OnRemoveStatus;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_ExecutionStatusList)
    TArray<UPalStatusBase*> ExecutionStatusList;
    
    UPROPERTY()
    TArray<UPalStatusBase*> ExecutionStatusListCache;
    
    UPROPERTY(Transient)
    TArray<EPalStatusID> DisableAddStatusIDs;
    
public:
    UPalStatusComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(NetMulticast, Reliable)
    void SomeStatus_ToAll(EPalStatusID statusID, FStatusDynamicParameter Param);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDisableAddStatusIDs(TArray<EPalStatusID> StatusIDs);
    
    UFUNCTION(BlueprintCallable)
    void ResetDisableAddStatusIDs();
    
private:
    UFUNCTION(Reliable, Server)
    void RemoveStatus_ToServer(EPalStatusID statusID, int32 issuerID);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveStatus(EPalStatusID statusID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAll();
    
private:
    UFUNCTION()
    void OnRep_ExecutionStatusList();
    
    UFUNCTION()
    UPalStatusBase* GetExecutionStatusCache(EPalStatusID statusID);
    
public:
    UFUNCTION(BlueprintPure)
    UPalStatusBase* GetExecutionStatus(EPalStatusID statusID);
    
    UFUNCTION()
    void BeginPlay();
    
    UFUNCTION(BlueprintCallable)
    void AddStatusParameter(EPalStatusID statusID, FStatusDynamicParameter Param);
    
private:
    UFUNCTION(Reliable, Server)
    void AddStatus_ToServer(EPalStatusID statusID, FStatusDynamicParameter Param, int32 issuerID);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddStatus(EPalStatusID statusID);
    
};

