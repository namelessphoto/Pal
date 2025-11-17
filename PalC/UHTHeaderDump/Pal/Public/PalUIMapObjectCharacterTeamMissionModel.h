#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalElementType.h"
#include "EPalMapObjectCharacterTeamMissionState.h"
#include "PalCharacterTeamMissionInfo.h"
#include "PalInstanceID.h"
#include "PalMapObjectCharacterTeamMissionIndividualRepInfo.h"
#include "PalUIMapObjectCharacterTeamMissionIndividual.h"
#include "PalUIMapObjectCharacterTeamMissionModel.generated.h"

class UPalGuildCharacterTeamMission;
class UPalMapObjectCharacterTeamMissionAssignedInfo;
class UPalMapObjectCharacterTeamMissionFunctionsBase;
class UPalMapObjectCharacterTeamMissionModel;
class UPalUIMapObjectCharacterTeamMissionModel;

UCLASS(BlueprintType)
class PAL_API UPalUIMapObjectCharacterTeamMissionModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateChangedDelegate, const EPalMapObjectCharacterTeamMissionState, LastState, const EPalMapObjectCharacterTeamMissionState, CurrentState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMultiDelegate, UPalUIMapObjectCharacterTeamMissionModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfMultiDelegate OnChangedMissionDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfMultiDelegate OnChangedAssignedInfoDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfMultiDelegate OnUpdateReleasedMissionInfoDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfMultiDelegate OnUpdateCompleteDateTimeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FStateChangedDelegate OnChangedStateDelegate;
    
private:
    UPROPERTY()
    UPalMapObjectCharacterTeamMissionFunctionsBase* Functions;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalUIMapObjectCharacterTeamMissionIndividual> AssignedIndividualInfos;
    
public:
    UPalUIMapObjectCharacterTeamMissionModel();

    UFUNCTION(BlueprintCallable)
    void RequestUnselectAssignedCharacter(const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnselectAll();
    
    UFUNCTION(BlueprintCallable)
    void RequestStopReplication();
    
    UFUNCTION(BlueprintCallable)
    void RequestStartReplication();
    
    UFUNCTION(BlueprintCallable)
    void RequestStartMission();
    
    UFUNCTION(BlueprintCallable)
    void RequestSelectMission(const FName MissionId);
    
    UFUNCTION(BlueprintCallable)
    void RequestSelectAuto();
    
    UFUNCTION(BlueprintCallable)
    void RequestSelectAssignedCharacter(const FPalInstanceID& IndividualId);
    
protected:
    UFUNCTION()
    void OnUpdateReleasedMissionInfo(UPalGuildCharacterTeamMission* OwnerGuildCharacterTeamMission);
    
    UFUNCTION()
    void OnUpdatedCompleteDateTime(UPalMapObjectCharacterTeamMissionModel* OwnerConcreteModel);
    
    UFUNCTION()
    void OnReplicatedAssignedInfo(UPalMapObjectCharacterTeamMissionModel* OwnerConcreteModel);
    
    UFUNCTION()
    void OnPreReplicatedRemoveAssignedInfo(const FPalMapObjectCharacterTeamMissionIndividualRepInfo& RepInfo);
    
    UFUNCTION()
    void OnPostReplicatedChangeAssignedInfo(const FPalMapObjectCharacterTeamMissionIndividualRepInfo& RepInfo);
    
    UFUNCTION()
    void OnPostReplicatedAddAssignedInfo(const FPalMapObjectCharacterTeamMissionIndividualRepInfo& RepInfo);
    
    UFUNCTION()
    void OnChangedTargetMission(UPalMapObjectCharacterTeamMissionModel* OwnerConcreteModel);
    
    UFUNCTION()
    void OnChangedState(const EPalMapObjectCharacterTeamMissionState LastState, const EPalMapObjectCharacterTeamMissionState CurrentState);
    
    UFUNCTION()
    void OnChangedAssignedInfo_ServerInternal(UPalMapObjectCharacterTeamMissionAssignedInfo* AssignedInfo);
    
public:
    UFUNCTION(BlueprintPure)
    bool MakeTransientAssignInfo(const FPalInstanceID& IndividualId, FPalUIMapObjectCharacterTeamMissionIndividual& OutAssignInfo) const;
    
    UFUNCTION(BlueprintPure)
    bool IsMaxAssigned() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExistAssignInfo() const;
    
    UFUNCTION(BlueprintPure)
    void GetSelectableMissionInfos(TArray<FPalCharacterTeamMissionInfo>& OutInfos) const;
    
    UFUNCTION(BlueprintPure)
    float GetRemainMissionSeconds() const;
    
    UFUNCTION(BlueprintPure)
    void GetMissionInfo(const FName MissionId, FPalCharacterTeamMissionInfo& OutInfo) const;
    
    UFUNCTION(BlueprintPure)
    FDateTime GetInProgressMissionCompleteDateTime() const;
    
    UFUNCTION(BlueprintPure)
    EPalMapObjectCharacterTeamMissionState GetCurrentState() const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentMissionInfo(FPalCharacterTeamMissionInfo& OutInfo) const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentElementalRequiredInfo(EPalElementType& OutRequiredElementType, int32& CurrentAssignedNum, int32& RequiredNum, bool& bSatisfiedCondition) const;
    
    UFUNCTION(BlueprintPure)
    bool GetConcreteModelInstanceId(FGuid& OutID) const;
    
    UFUNCTION(BlueprintPure)
    void GetAssignedIndividualInfos(TArray<FPalUIMapObjectCharacterTeamMissionIndividual>& OutIndividualInfos) const;
    
    UFUNCTION(BlueprintPure)
    bool CanStartMission() const;
    
    UFUNCTION(BlueprintPure)
    float CalculateCurrentRewardRate() const;
    
    UFUNCTION(BlueprintPure)
    int32 CalculateCurrentMissionRequiredSecondsByTeamStrength(const int32 TeamStrength) const;
    
    UFUNCTION(BlueprintPure)
    int32 CalculateCurrentMissionRequiredSeconds() const;
    
    UFUNCTION(BlueprintPure)
    int32 CalculateCharacterTeamStrength() const;
    
    UFUNCTION(BlueprintPure)
    int32 CalculateCharacterStrength(const FPalInstanceID& IndividualId) const;
    
};

