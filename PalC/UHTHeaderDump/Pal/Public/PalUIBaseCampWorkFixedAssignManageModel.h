#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalUIFixedAssignManageListSortType.h"
#include "PalInstanceID.h"
#include "PalUIBaseCampWorkFixedAssignInfo.h"
#include "PalUIBaseCampWorkFixedAssignManageModel.generated.h"

class UPalBaseCampWorkCollectionReplicationList;
class UPalIndividualCharacterContainer;
class UPalIndividualCharacterParameter;
class UPalUIBaseCampWorkFixedAssignManageModel;

UCLASS(BlueprintType)
class PAL_API UPalUIBaseCampWorkFixedAssignManageModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalUIBaseCampWorkFixedAssignManageModel*, Self);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnUpdateWorkInBaseCampDelegate;
    
    UPalUIBaseCampWorkFixedAssignManageModel();

    UFUNCTION(BlueprintCallable)
    void SortFixedAssignableWorks(EPalUIFixedAssignManageListSortType SortType, const TArray<FPalUIBaseCampWorkFixedAssignInfo>& OriginalArray, TArray<FPalUIBaseCampWorkFixedAssignInfo>& OutArray);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnassignWork(const FGuid& WorkId, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnassign(const FPalUIBaseCampWorkFixedAssignInfo& TargetInfo, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void RequestStartReplicateWorkInBaseCamp();
    
    UFUNCTION(BlueprintCallable)
    void RequestFixedAssignWork(const FGuid& WorkId, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void RequestFixedAssign(const FPalUIBaseCampWorkFixedAssignInfo& TargetInfo, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void RequestEndReplicateWorkInBaseCamp();
    
private:
    UFUNCTION()
    void OnUpdateWorkInBaseCamp(UPalBaseCampWorkCollectionReplicationList* ReplicationList);
    
public:
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterContainer* GetTargetBaseCampWorkerCharacterContainer() const;
    
    UFUNCTION(BlueprintCallable)
    void GetFixedAssignableWorks(TArray<FPalUIBaseCampWorkFixedAssignInfo>& OutWorks);
    
    UFUNCTION(BlueprintPure)
    bool CanFixedAssign(const FPalUIBaseCampWorkFixedAssignInfo& TargetInfo, UPalIndividualCharacterParameter* TargetCharacterParameter) const;
    
};

