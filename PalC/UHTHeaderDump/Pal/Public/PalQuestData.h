#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalCommonQuestRewardData.h"
#include "PalOrderedQuestSaveData.h"
#include "PalQuestData.generated.h"

class UPalQuestBlock;
class UPalQuestData;

UCLASS(Blueprintable)
class PAL_API UPalQuestData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatedQuestDelegate, UPalQuestData*, UpdatedQuest);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReadyQuestData, UPalQuestData*, SelfQuest);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompleteQuestDelegate, UPalQuestData*, CompletedQuest);
    
    UPROPERTY(BlueprintAssignable)
    FUpdatedQuestDelegate OnUpdatedQuestInServerDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCompleteQuestDelegate OnCompletedQuestInServerDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnReadyQuestData OnReadyQuestData;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_CurrentBlock)
    UPalQuestBlock* NowQuestBlock;
    
    UPROPERTY(ReplicatedUsing=OnRep_QuestId)
    FName QuestId;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftClassPtr<UPalQuestBlock>> QuestBlockList;
    
    UPROPERTY(EditDefaultsOnly)
    FName QuestTitleMsgId;
    
    UPROPERTY(EditDefaultsOnly)
    FName QuestDescriptionMsgId;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> AutoOrderQuests;
    
    UPROPERTY(EditDefaultsOnly)
    FPalCommonQuestRewardData CommonRewardData;
    
    UPROPERTY(Transient)
    FPalOrderedQuestSaveData CachedSaveData;
    
public:
    UPalQuestData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnUpdatedQuestBlock_ServerInternal(UPalQuestBlock* UpdatedBlock);
    
    UFUNCTION()
    void OnRequestReturnBlock_ServerInternal(UPalQuestBlock* UpdatedBlock);
    
    UFUNCTION()
    void OnRep_QuestId();
    
    UFUNCTION()
    void OnRep_CurrentBlock();
    
    UFUNCTION()
    void OnCompletedQuestBlock_ServerInternal(UPalQuestBlock* CompletedBlock);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadQuestBlockForUI(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InitializeForUI(const FGuid& InOwnerPlayerUId, const FName& InQuestName);
    
    UFUNCTION(BlueprintPure)
    void GetQuestNameText(FText& OutText) const;
    
protected:
    UFUNCTION()
    TArray<FName> GetQuestNameMsgIdRowNames() const;
    
    UFUNCTION()
    TArray<FName> GetQuestIdRowNames() const;
    
public:
    UFUNCTION(BlueprintPure)
    FName GetQuestId() const;
    
    UFUNCTION(BlueprintPure)
    void GetQuestDescriptionText(FText& OutText) const;
    
protected:
    UFUNCTION()
    TArray<FName> GetQuestDescriptionMsgIdRowNames() const;
    
public:
    UFUNCTION(BlueprintPure)
    void GetQuestBlock(UPalQuestBlock*& OutBlock) const;
    
    UFUNCTION(BlueprintPure)
    void GetCommonRewardData(FPalCommonQuestRewardData& OutData);
    
    UFUNCTION(BlueprintNativeEvent)
    void FormatQuestTitleText(const FText& InOriginalText, FText& OutText) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void FormatQuestDescriptionText(const FText& InOriginalText, FText& OutText) const;
    
};

