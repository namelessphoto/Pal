#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalBaseCampWorkCollectionStashInfo.h"
#include "PalInstanceID.h"
#include "PalWorkAssignRequirementParameter.h"
#include "PalBaseCampWorkCollection.generated.h"

class UPalBaseCampGroupedWorkBase;
class UPalBaseCampWorkCollectionReplicationList;
class UPalWorkBase;

UCLASS()
class UPalBaseCampWorkCollection : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWorkAssignUpdateDelegate, UPalWorkBase*, Work, const FPalInstanceID&, IndividualId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWorkAssignRequirementDelegate, UPalWorkBase*, Work, const FPalWorkAssignRequirementParameter&, RequirementParameter);
    
    UPROPERTY(BlueprintAssignable)
    FWorkAssignUpdateDelegate OnUnassignWorkDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid BaseCampId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FGuid> WorkIds;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<UPalBaseCampGroupedWorkBase*> GroupedWorks;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TSet<FGuid> RepairWorkIdSet;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    UPalBaseCampWorkCollectionReplicationList* ReplicationList;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, FPalBaseCampWorkCollectionStashInfo> CannotMoveToWorkInfoMap;
    
public:
    UPalBaseCampWorkCollection();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnUnassignWork_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION()
    void OnRequiredAssign_ServerInternal(UPalWorkBase* Work, const FPalWorkAssignRequirementParameter& RequirementParameter);
    
};

