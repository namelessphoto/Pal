#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalLocalQuestLocationData.h"
#include "PalOrderedQuestSaveData.h"
#include "PalQuestReplicationData.h"
#include "PalQuestManager.generated.h"

class UDataTable;
class UPalCommonQuestRewardGiver;
class UPalIndividualCharacterParameter;
class UPalLocationBase;
class UPalQuestData;

UCLASS(BlueprintType)
class PAL_API UPalQuestManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateTrackingQuestId, const FName&, QuestId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatedQuestDelegate, const FName&, QuestId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOrderedQuestDelegate, const FName&, QuestId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompletedQuestDelegate, const FName&, QuestId);
    
    UPROPERTY(BlueprintAssignable)
    FOrderedQuestDelegate OnOrderedQuestDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdatedQuestDelegate OnUpdatedQuestDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCompletedQuestDelegate OnCompletedQuestDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateTrackingQuestId OnUpdateTrackingQuestId;
    
protected:
    UPROPERTY(Transient)
    TArray<UPalQuestData*> WaitingLoadQuestDataArray;
    
    UPROPERTY()
    TMap<FName, UPalQuestData*> OrderedQuestMap_ForServer;
    
    UPROPERTY()
    TMap<FName, FPalOrderedQuestSaveData> PreloadQuestSaveDataMap_ForServer;
    
    UPROPERTY(ReplicatedUsing=OnRep_OrderedQuestArray)
    FPalQuestReplicationData QuestReplicationData;
    
    UPROPERTY(Replicated)
    TArray<FName> CompletedQuestNames;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* QuestDataSet;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> InitialOrderQuestIdArray;
    
    UPROPERTY(Transient)
    TMap<FName, FPalLocalQuestLocationData> LocalLocationMap;
    
    UPROPERTY(Transient)
    TArray<UPalIndividualCharacterParameter*> InRangeParameters;
    
private:
    UPROPERTY()
    UPalCommonQuestRewardGiver* CommonRewardGiver;
    
    UPROPERTY(Transient)
    TArray<FPalOrderedQuestSaveData> CahcedSaveData_OrderedQuestData;
    
public:
    UPalQuestManager();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TrackingQuest(const FName& QuestName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTracking();
    
    UFUNCTION(BlueprintCallable)
    void OrderQuest_ServerInternal(const FName& QuestName, int32 FirstBlockIndex);
    
protected:
    UFUNCTION()
    void OnUpdatedQuest_ServerInternal(UPalQuestData* UpdatedQuest);
    
private:
    UFUNCTION()
    void OnRep_OrderedQuestArray();
    
protected:
    UFUNCTION()
    void OnRemovedLocation(const FGuid& LocationId, UPalLocationBase* Location);
    
    UFUNCTION()
    void OnReadyQuest_ServerInternal(UPalQuestData* QuestData);
    
    UFUNCTION()
    void OnDisplayCharacterHPGauge(UPalIndividualCharacterParameter* Parameter);
    
    UFUNCTION()
    void OnDeleteCharacterHPGauge(UPalIndividualCharacterParameter* Parameter);
    
    UFUNCTION()
    void OnCompletedQuest_ServerInternal(UPalQuestData* CompletedQuest);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsQuestOrdered(const FName& QuestId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsQuestCompleted(const FName& QuestId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAllQuestComplete();
    
    UFUNCTION(BlueprintPure)
    FName GetTrackingQuestId() const;
    
protected:
    UFUNCTION()
    TArray<FName> GetQuestIdRowName() const;
    
public:
    UFUNCTION(BlueprintPure)
    UPalQuestData* GetQuestData(const FName& QuestId) const;
    
    UFUNCTION(BlueprintPure)
    float GetNearestQuestLocationDistance(const FName& QuestId) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UPalQuestData*> GetAllOrderedQuest() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetAllCompletedQuestId() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceCompleteQuest_ServerInternal(const FName& QuestName);
    
    UFUNCTION(BlueprintPure)
    bool CanReorderableQuest(const FName& QuestId) const;
    
};

