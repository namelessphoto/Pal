#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalWorkAssignableFixedType.h"
#include "EPalWorkBehaviourType.h"
#include "EPalWorkProgressState.h"
#include "EPalWorkType.h"
#include "PalBaseCampAssignableObjectInterface.h"
#include "PalBoundsTransform.h"
#include "PalFastWorkAssignRepInfoArray.h"
#include "PalInstanceID.h"
#include "PalWorkAssignInfo.h"
#include "PalWorkAssignLocalLocation.h"
#include "PalWorkAssignRequirementParameter.h"
#include "PalWorkBase.generated.h"

class UPalCharacterParameterComponent;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterSlot;
class UPalMapObjectConcreteModelBase;
class UPalWorkAssign;
class UPalWorkBase;
class UPalWorkProgressTransformBase;

UCLASS(Abstract, BlueprintType)
class UPalWorkBase : public UObject, public IPalBaseCampAssignableObjectInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWorkAssignUpdateDelegateWithWorkAssign, UPalWorkBase*, Work, UPalWorkAssign*, WorkAssign);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWorkAssignUpdateDelegateWithIndividualId, UPalWorkBase*, Work, const FPalInstanceID&, IndividualId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWorkAssignRequirementDelegate, UPalWorkBase*, Work, const FPalWorkAssignRequirementParameter&, RequirementParameter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyWorkDelegate, UPalWorkBase*, Work);
    
    UPROPERTY(BlueprintAssignable)
    FNotifyWorkDelegate OnDisposeDelegate;
    
    UPROPERTY()
    FNotifyWorkDelegate OnFinishWorkInServerDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FNotifyWorkDelegate OnReflectFinishWorkDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FNotifyWorkDelegate OnUpdateAssignedCharacterDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FNotifyWorkDelegate OnUpdateCurrentStateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FWorkAssignRequirementDelegate OnRequiredAssignWorkDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FWorkAssignUpdateDelegateWithWorkAssign OnAssignWorkDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FWorkAssignUpdateDelegateWithIndividualId OnUnassignWorkDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FWorkAssignUpdateDelegateWithIndividualId OnStartWorkDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FWorkAssignUpdateDelegateWithIndividualId OnEndWorkDelegate;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalBoundsTransform WorkableBounds;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FName AssignDefineDataId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalWorkType OverrideWorkType;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<FPalWorkAssignLocalLocation> AssignLocations;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid BaseCampIdBelongTo;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid OwnerMapObjectModelId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid OwnerMapObjectConcreteModelId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalWorkBehaviourType BehaviourType;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalWorkAssignableFixedType AssignableFixedType;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bAssignableOtomo;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bCanTriggerWorkerEvent;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bCanStealAssign;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bAssignWorldSitLocationAtWorkFacing;
    
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid ID;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CurrentState)
    EPalWorkProgressState CurrentState;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    UPalWorkProgressTransformBase* Transform;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalFastWorkAssignRepInfoArray AssignRepInfoArray;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bGroupRaycastStartOffsetOrigin;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalMapObjectConcreteModelBase* CachedOwnerMapObjectConcreteModel;
    
public:
    UPalWorkBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_CurrentState();
    
public:
    UFUNCTION()
    void IssueNotifierLog_WorkStart(const UPalCharacterParameterComponent* CharacterParameter);
    
    UFUNCTION(BlueprintPure)
    bool IsExistAssignableSlot(const UPalIndividualCharacterHandle* AssignIndividualHandle, const bool bByFixedAssign) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAssignedCharacter(const UPalIndividualCharacterHandle* IndividualHandle) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAssignableFixedOnly() const;
    
    UFUNCTION(BlueprintPure)
    FText GetWorkName() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetWorkId() const;
    
    UFUNCTION(BlueprintPure)
    void GetWorkAssignInfo(TArray<FPalWorkAssignInfo>& OutWorkAssignInfo) const;
    
    UFUNCTION(BlueprintPure)
    void GetWorkableElementTypeNames(TArray<FText>& outElementNames) const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetId() const;
    
    UFUNCTION(BlueprintPure)
    void GetGenusCategorieNames(TArray<FText>& outGenusCategorieNames) const;
    
    UFUNCTION(BlueprintPure)
    void GetAssignedCharacters(TArray<UPalIndividualCharacterSlot*>& IndividualSlots) const;
    
    UFUNCTION(BlueprintPure)
    EPalWorkAssignableFixedType GetAssignableFixedType() const;
    

    // Fix for true pure virtual functions not being implemented
};

