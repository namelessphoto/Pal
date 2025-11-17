#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EFlowFinishPolicy.h"
#include "EFlowNetMode.h"
#include "EFlowOnScreenMessageType.h"
#include "FlowAssetSaveData.h"
#include "FlowComponentDynamicNotifyDelegate.h"
#include "FlowComponentSaveData.h"
#include "FlowComponentTagsReplicatedDelegate.h"
#include "FlowOwnerInterface.h"
#include "NotifyTagReplication.h"
#include "FlowComponent.generated.h"

class UFlowAsset;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FLOW_API UFlowComponent : public UActorComponent, public IFlowOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer IdentityTags;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_AddedIdentityTags)
    FGameplayTagContainer AddedIdentityTags;
    
    UPROPERTY(ReplicatedUsing=OnRep_RemovedIdentityTags)
    FGameplayTagContainer RemovedIdentityTags;
    
public:
    UPROPERTY(BlueprintAssignable)
    FFlowComponentTagsReplicated OnIdentityTagsAdded;
    
    UPROPERTY(BlueprintAssignable)
    FFlowComponentTagsReplicated OnIdentityTagsRemoved;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_SentNotifyTags)
    FGameplayTagContainer RecentlySentNotifyTags;
    
    UPROPERTY(ReplicatedUsing=OnRep_NotifyTagsFromGraph)
    FGameplayTagContainer NotifyTagsFromGraph;
    
public:
    UPROPERTY(BlueprintAssignable)
    FFlowComponentDynamicNotify ReceiveNotify;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_NotifyTagsFromAnotherComponent)
    TArray<FNotifyTagReplication> NotifyTagsFromAnotherComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UFlowAsset* RootFlow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAutoStartRootFlow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EFlowNetMode RootFlowMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowMultipleInstances;
    
    UPROPERTY(SaveGame)
    FString SavedAssetInstanceName;
    
    UFlowComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartRootFlow();
    
    UFUNCTION(BlueprintCallable)
    void SaveRootFlow(TArray<FFlowAssetSaveData>& SavedFlowInstances);
    
    UFUNCTION(BlueprintCallable)
    FFlowComponentSaveData SaveInstance();
    
    UFUNCTION(BlueprintCallable)
    void RemoveIdentityTags(FGameplayTagContainer Tags, const EFlowNetMode NetMode);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIdentityTag(const FGameplayTag Tag, const EFlowNetMode NetMode);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnSave();
    
private:
    UFUNCTION()
    void OnRep_SentNotifyTags();
    
    UFUNCTION()
    void OnRep_RemovedIdentityTags();
    
    UFUNCTION()
    void OnRep_NotifyTagsFromGraph();
    
    UFUNCTION()
    void OnRep_NotifyTagsFromAnotherComponent();
    
    UFUNCTION()
    void OnRep_AddedIdentityTags();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnLoad();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyGraph(const FGameplayTag NotifyTag, const EFlowNetMode NetMode);
    
    UFUNCTION(BlueprintCallable)
    void NotifyActor(const FGameplayTag ActorTag, const FGameplayTag NotifyTag, const EFlowNetMode NetMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void LogError(const FString& Message, const EFlowOnScreenMessageType OnScreenMessageType) const;
    
    UFUNCTION(BlueprintCallable)
    void LoadRootFlow();
    
    UFUNCTION(BlueprintCallable)
    bool LoadInstance();
    
    UFUNCTION(BlueprintPure)
    TSet<UFlowAsset*> GetRootInstances(const UObject* Owner) const;
    
    UFUNCTION(BlueprintPure)
    UFlowAsset* GetRootFlowInstance() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishRootFlow(UFlowAsset* TemplateAsset, const EFlowFinishPolicy FinishPolicy);
    
    UFUNCTION(BlueprintCallable)
    void BulkNotifyGraph(const FGameplayTagContainer NotifyTags, const EFlowNetMode NetMode);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnTriggerRootFlowOutputEvent(UFlowAsset* RootFlowInstance, const FName& EventName);
    
    UFUNCTION(BlueprintCallable)
    void AddIdentityTags(FGameplayTagContainer Tags, const EFlowNetMode NetMode);
    
    UFUNCTION(BlueprintCallable)
    void AddIdentityTag(const FGameplayTag Tag, const EFlowNetMode NetMode);
    

    // Fix for true pure virtual functions not being implemented
};

