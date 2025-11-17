#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=EGameplayContainerMatchType -FallbackName=EGameplayContainerMatchType
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EFlowFinishPolicy.h"
#include "SimpleFlowComponentEventDelegate.h"
#include "SimpleFlowEventDelegate.h"
#include "TaggedFlowComponentEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "FlowSubsystem.generated.h"

class AActor;
class UFlowAsset;
class UFlowComponent;
class UFlowNode_SubGraph;
class UFlowSaveGame;
class UObject;

UCLASS(BlueprintType)
class FLOW_API UFlowSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UFlowAsset*> InstancedTemplates;
    
    UPROPERTY()
    TMap<UFlowAsset*, TWeakObjectPtr<UObject>> RootInstances;
    
    UPROPERTY()
    TMap<UFlowNode_SubGraph*, UFlowAsset*> InstancedSubFlows;
    
protected:
    UPROPERTY()
    UFlowSaveGame* LoadedSaveGame;
    
public:
    UPROPERTY(BlueprintAssignable)
    FSimpleFlowEvent OnSaveGame;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleFlowComponentEvent OnComponentRegistered;
    
    UPROPERTY(BlueprintAssignable)
    FTaggedFlowComponentEvent OnComponentTagAdded;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleFlowComponentEvent OnComponentUnregistered;
    
    UPROPERTY(BlueprintAssignable)
    FTaggedFlowComponentEvent OnComponentTagRemoved;
    
    UFlowSubsystem();

    UFUNCTION(BlueprintCallable)
    void StartRootFlow(UObject* Owner, UFlowAsset* FlowAsset, const bool bAllowMultipleInstances);
    
    UFUNCTION(BlueprintCallable)
    void OnGameSaved(UFlowSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    void OnGameLoaded(UFlowSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    void LoadSubFlow(UFlowNode_SubGraph* SubGraphNode, const FString& SavedAssetInstanceName);
    
    UFUNCTION(BlueprintCallable)
    void LoadRootFlow(UObject* Owner, UFlowAsset* FlowAsset, const FString& SavedAssetInstanceName);
    
    UFUNCTION(BlueprintPure)
    TSet<UFlowAsset*> GetRootInstancesByOwner(const UObject* Owner) const;
    
    UFUNCTION(BlueprintPure)
    TMap<UObject*, UFlowAsset*> GetRootInstances() const;
    
    UFUNCTION(BlueprintPure)
    UFlowAsset* GetRootFlow(const UObject* Owner) const;
    
    UFUNCTION(BlueprintPure)
    UFlowSaveGame* GetLoadedSaveGame() const;
    
    UFUNCTION(BlueprintPure)
    TMap<UFlowNode_SubGraph*, UFlowAsset*> GetInstancedSubFlows() const;
    
    UFUNCTION(BlueprintPure)
    TSet<UFlowComponent*> GetFlowComponentsByTags(const FGameplayTagContainer Tags, const EGameplayContainerMatchType MatchType, const TSubclassOf<UFlowComponent> ComponentClass, const bool bExactMatch) const;
    
    UFUNCTION(BlueprintPure)
    TSet<UFlowComponent*> GetFlowComponentsByTag(const FGameplayTag Tag, const TSubclassOf<UFlowComponent> ComponentClass, const bool bExactMatch) const;
    
    UFUNCTION(BlueprintPure)
    TSet<AActor*> GetFlowActorsByTags(const FGameplayTagContainer Tags, const EGameplayContainerMatchType MatchType, const TSubclassOf<AActor> actorClass, const bool bExactMatch) const;
    
    UFUNCTION(BlueprintPure)
    TSet<AActor*> GetFlowActorsByTag(const FGameplayTag Tag, const TSubclassOf<AActor> actorClass, const bool bExactMatch) const;
    
    UFUNCTION(BlueprintPure)
    TMap<AActor*, UFlowComponent*> GetFlowActorsAndComponentsByTags(const FGameplayTagContainer Tags, const EGameplayContainerMatchType MatchType, const TSubclassOf<AActor> actorClass, const bool bExactMatch) const;
    
    UFUNCTION(BlueprintPure)
    TMap<AActor*, UFlowComponent*> GetFlowActorsAndComponentsByTag(const FGameplayTag Tag, const TSubclassOf<AActor> actorClass, const bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable)
    void FinishRootFlow(UObject* Owner, UFlowAsset* TemplateAsset, const EFlowFinishPolicy FinishPolicy);
    
    UFUNCTION(BlueprintCallable)
    void FinishAllRootFlows(UObject* Owner, const EFlowFinishPolicy FinishPolicy);
    
    UFUNCTION(BlueprintCallable)
    void AbortActiveFlows();
    
};

