#ifndef UE4SS_SDK_Flow_HPP
#define UE4SS_SDK_Flow_HPP

#include "Flow_enums.hpp"

struct FConnectedPin
{
    FGuid NodeGuid;
    FName PinName;

};

struct FFlowAssetSaveData
{
    FString WorldName;
    FString InstanceName;
    TArray<uint8> AssetData;
    TArray<FFlowNodeSaveData> NodeRecords;

};

struct FFlowComponentSaveData
{
    FString WorldName;
    FString ActorInstanceName;
    TArray<uint8> ComponentData;

};

struct FFlowInputPinHandle : public FFlowPinHandle
{
};

struct FFlowNodeSaveData
{
    FGuid NodeGuid;
    TArray<uint8> NodeData;

};

struct FFlowOutputPinHandle : public FFlowPinHandle
{
};

struct FFlowOwnerFunctionRef
{
    FName FunctionName;
    class UFunction* Function;

};

struct FFlowPin
{
    FName PinName;
    FText PinFriendlyName;
    FString PinToolTip;

};

struct FFlowPinHandle
{
    FName PinName;

};

struct FFlowPinTrait
{
    uint8 bTraitAllowed;

};

struct FMovieSceneFlowRepeaterTemplate : public FMovieSceneFlowTemplateBase
{
    FString EventName;

};

struct FMovieSceneFlowTemplateBase : public FMovieSceneEvalTemplate
{
    uint8 bFireEventsWhenForwards;
    uint8 bFireEventsWhenBackwards;

};

struct FMovieSceneFlowTriggerTemplate : public FMovieSceneFlowTemplateBase
{
    TArray<FFrameNumber> EventTimes;
    TArray<FString> EventNames;

};

struct FNotifyTagReplication
{
    FGameplayTag ActorTag;
    FGameplayTag NotifyTag;

};

class AFlowLevelSequenceActor : public ALevelSequenceActor
{
    class ULevelSequence* ReplicatedLevelSequenceAsset;

    void OnRep_ReplicatedLevelSequenceAsset();
};

class AFlowWorldSettings : public AWorldSettings
{
    class UFlowComponent* FlowComponent;

};

class IFlowOwnerInterface : public IInterface
{
};

class UFlowAsset : public UObject
{
    FGuid AssetGuid;
    bool bWorldBound;
    TMap<class FGuid, class UFlowNode*> Nodes;
    TArray<class UFlowAsset*> ActiveInstances;
    class UFlowAsset* TemplateAsset;
    TSet<UFlowNode_CustomInput*> CustomInputNodes;
    TSet<UFlowNode*> PreloadedNodes;
    TArray<class UFlowNode*> ActiveNodes;
    TArray<class UFlowNode*> RecordedNodes;
    UClass* ExpectedOwnerClass;

    class AActor* TryFindActorOwner();
    FFlowAssetSaveData SaveInstance(TArray<FFlowAssetSaveData>& SavedFlowInstances);
    void OnSave();
    void OnLoad();
    void LoadInstance(const FFlowAssetSaveData& AssetRecord);
    bool IsBoundToWorld();
    bool IsActive();
    TArray<class UFlowNode*> GetRecordedNodes();
    class UObject* GetOwner();
    TArray<class UFlowNode*> GetNodesInExecutionOrder(class UFlowNode* FirstIteratedNode, const TSubclassOf<class UFlowNode> FlowNodeClass);
    class UFlowNode* GetDefaultEntryNode();
    TArray<class UFlowNode*> GetActiveNodes();
};

class UFlowComponent : public UActorComponent
{
    FGameplayTagContainer IdentityTags;
    FGameplayTagContainer AddedIdentityTags;
    FGameplayTagContainer RemovedIdentityTags;
    FFlowComponentOnIdentityTagsAdded OnIdentityTagsAdded;
    void FlowComponentTagsReplicated(class UFlowComponent* FlowComponent, const FGameplayTagContainer& CurrentTags);
    FFlowComponentOnIdentityTagsRemoved OnIdentityTagsRemoved;
    void FlowComponentTagsReplicated(class UFlowComponent* FlowComponent, const FGameplayTagContainer& CurrentTags);
    FGameplayTagContainer RecentlySentNotifyTags;
    FGameplayTagContainer NotifyTagsFromGraph;
    FFlowComponentReceiveNotify ReceiveNotify;
    void FlowComponentDynamicNotify(class UFlowComponent* FlowComponent, const FGameplayTag& NotifyTag);
    TArray<FNotifyTagReplication> NotifyTagsFromAnotherComponent;
    class UFlowAsset* RootFlow;
    bool bAutoStartRootFlow;
    EFlowNetMode RootFlowMode;
    bool bAllowMultipleInstances;
    FString SavedAssetInstanceName;

    void StartRootFlow();
    void SaveRootFlow(TArray<FFlowAssetSaveData>& SavedFlowInstances);
    FFlowComponentSaveData SaveInstance();
    void RemoveIdentityTags(FGameplayTagContainer Tags, const EFlowNetMode NetMode);
    void RemoveIdentityTag(const FGameplayTag Tag, const EFlowNetMode NetMode);
    void OnSave();
    void OnRep_SentNotifyTags();
    void OnRep_RemovedIdentityTags();
    void OnRep_NotifyTagsFromGraph();
    void OnRep_NotifyTagsFromAnotherComponent();
    void OnRep_AddedIdentityTags();
    void OnLoad();
    void NotifyGraph(const FGameplayTag NotifyTag, const EFlowNetMode NetMode);
    void NotifyActor(const FGameplayTag ActorTag, const FGameplayTag NotifyTag, const EFlowNetMode NetMode);
    void LogError(FString Message, const EFlowOnScreenMessageType OnScreenMessageType);
    void LoadRootFlow();
    bool LoadInstance();
    TSet<UFlowAsset*> GetRootInstances(const class UObject* Owner);
    class UFlowAsset* GetRootFlowInstance();
    void FinishRootFlow(class UFlowAsset* TemplateAsset, const EFlowFinishPolicy FinishPolicy);
    void BulkNotifyGraph(const FGameplayTagContainer NotifyTags, const EFlowNetMode NetMode);
    void BP_OnTriggerRootFlowOutputEvent(class UFlowAsset* RootFlowInstance, const FName& EventName);
    void AddIdentityTags(FGameplayTagContainer Tags, const EFlowNetMode NetMode);
    void AddIdentityTag(const FGameplayTag Tag, const EFlowNetMode NetMode);
};

class UFlowLevelSequencePlayer : public ULevelSequencePlayer
{
    class UFlowNode* FlowEventReceiver;

};

class UFlowNode : public UObject
{
    class UEdGraphNode* GraphNode;
    FGuid NodeGuid;
    TArray<EFlowSignalMode> AllowedSignalModes;
    EFlowSignalMode SignalMode;
    TArray<FFlowPin> InputPins;
    TArray<FFlowPin> OutputPins;
    TMap<class FName, class FConnectedPin> Connections;
    EFlowNodeState ActivationState;

    void TriggerOutputPin(const FFlowOutputPinHandle Pin, const bool bFinish, const EFlowPinActivationType ActivationType);
    void TriggerOutput(const FName& PinName, const bool bFinish, const EFlowPinActivationType ActivationType);
    void TriggerFirstOutput(const bool bFinish);
    void SetGuid(const FGuid& NewGuid);
    void SaveInstance(FFlowNodeSaveData& NodeRecord);
    void OnSave();
    void OnPassThrough();
    void OnLoad();
    void LogWarning(FString Message);
    void LogNote(FString Message);
    void LogError(FString Message, const EFlowOnScreenMessageType OnScreenMessageType);
    void LoadInstance(const FFlowNodeSaveData& NodeRecord);
    void K2_PreloadContent();
    void K2_OnActivate();
    void K2_InitializeInstance();
    FString K2_GetStatusString();
    bool K2_GetStatusBackgroundColor(FLinearColor& OutColor);
    FString K2_GetNodeDescription();
    class UObject* K2_GetAssetToEdit();
    FString K2_GetAssetPath();
    class AActor* K2_GetActorToFocus();
    void K2_ForceFinishNode();
    void K2_FlushContent();
    void K2_ExecuteInput(const FName& PinName);
    void K2_DeinitializeInstance();
    void K2_Cleanup();
    bool K2_CanUserAddOutput();
    bool K2_CanUserAddInput();
    bool IsOutputConnected(const FName& PinName);
    bool IsInputConnected(const FName& PinName);
    FString GetProgressAsString(float Value);
    TArray<FName> GetOutputNames();
    FString GetNotifyTagsDescription(const FGameplayTagContainer& Tags);
    TArray<FName> GetInputNames();
    FString GetIdentityTagsDescription(const FGameplayTagContainer& Tags);
    FString GetIdentityTagDescription(const FGameplayTag& Tag);
    FGuid GetGuid();
    class UFlowSubsystem* GetFlowSubsystem();
    class UFlowAsset* GetFlowAsset();
    TSet<UFlowNode*> GetConnectedNodes();
    FString GetClassDescription(const UClass* Class);
    void Finish();
};

class UFlowNodeBlueprint : public UBlueprint
{
};

class UFlowNode_CallOwnerFunction : public UFlowNode
{
    FFlowOwnerFunctionRef FunctionRef;
    class UFlowOwnerFunctionParams* Params;

};

class UFlowNode_Checkpoint : public UFlowNode
{
};

class UFlowNode_ComponentObserver : public UFlowNode
{
    FGameplayTagContainer IdentityTags;
    EFlowTagContainerMatchType IdentityMatchType;
    int32 SuccessLimit;
    int32 SuccessCount;

    void OnEventReceived();
    void OnComponentUnregistered(class UFlowComponent* Component);
    void OnComponentTagRemoved(class UFlowComponent* Component, const FGameplayTagContainer& RemovedTags);
    void OnComponentTagAdded(class UFlowComponent* Component, const FGameplayTagContainer& AddedTags);
    void OnComponentRegistered(class UFlowComponent* Component);
};

class UFlowNode_Counter : public UFlowNode
{
    int32 Goal;
    int32 CurrentSum;

};

class UFlowNode_CustomEventBase : public UFlowNode
{
    FName EventName;

};

class UFlowNode_CustomInput : public UFlowNode_CustomEventBase
{
};

class UFlowNode_CustomOutput : public UFlowNode_CustomEventBase
{
};

class UFlowNode_ExecutionMultiGate : public UFlowNode
{
    bool bRandom;
    bool bLoop;
    int32 StartIndex;
    int32 NextOutput;
    TArray<bool> Completed;

};

class UFlowNode_ExecutionSequence : public UFlowNode
{
    bool bSavePinExecutionState;
    TSet<FGuid> ExecutedConnections;

};

class UFlowNode_Finish : public UFlowNode
{
};

class UFlowNode_Log : public UFlowNode
{
    FString Message;
    EFlowLogVerbosity Verbosity;
    bool bPrintToScreen;
    float Duration;
    FColor TextColor;

};

class UFlowNode_LogicalAND : public UFlowNode
{
    TSet<FName> ExecutedInputNames;

};

class UFlowNode_LogicalOR : public UFlowNode
{
    bool bEnabled;
    int32 ExecutionLimit;
    int32 ExecutionCount;

};

class UFlowNode_NotifyActor : public UFlowNode
{
    FGameplayTagContainer IdentityTags;
    EGameplayContainerMatchType MatchType;
    bool bExactMatch;
    FGameplayTagContainer NotifyTags;
    EFlowNetMode NetMode;

};

class UFlowNode_OnActorRegistered : public UFlowNode_ComponentObserver
{
};

class UFlowNode_OnActorUnregistered : public UFlowNode_ComponentObserver
{
};

class UFlowNode_OnNotifyFromActor : public UFlowNode_ComponentObserver
{
    FGameplayTagContainer NotifyTags;
    bool bRetroactive;

};

class UFlowNode_PlayLevelSequence : public UFlowNode
{
    TSoftObjectPtr<ULevelSequence> Sequence;
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    bool bPlayReverse;
    FLevelSequenceCameraSettings CameraSettings;
    bool bUseGraphOwnerAsTransformOrigin;
    bool bReplicates;
    bool bAlwaysRelevant;
    bool bApplyOwnerTimeDilation;
    class ULevelSequence* LoadedSequence;
    class UFlowLevelSequencePlayer* SequencePlayer;
    float StartTime;
    float ElapsedTime;
    float TimeDilation;

    void OnPlaybackFinished();
};

class UFlowNode_Reroute : public UFlowNode
{
};

class UFlowNode_Start : public UFlowNode
{
};

class UFlowNode_SubGraph : public UFlowNode
{
    TSoftObjectPtr<UFlowAsset> Asset;
    bool bCanInstanceIdenticalAsset;
    FString SavedAssetInstanceName;

};

class UFlowNode_Timer : public UFlowNode
{
    float CompletionTime;
    float StepTime;
    float SumOfSteps;
    float RemainingCompletionTime;
    float RemainingStepTime;

    void OnStep();
    void OnCompletion();
};

class UFlowOwnerFunctionParams : public UObject
{
    class UFlowNode_CallOwnerFunction* SourceNode;
    FName ExecutedInputPinName;

    bool ShouldFinishForOutputName(const FName& OutputName);
    void BP_PreExecute();
    void BP_PostExecute();
    TArray<FName> BP_GetOutputNames();
    TArray<FName> BP_GetInputNames();
};

class UFlowSaveGame : public USaveGame
{
    FString SaveSlotName;
    TArray<FFlowComponentSaveData> FlowComponents;
    TArray<FFlowAssetSaveData> FlowInstances;

};

class UFlowSettings : public UDeveloperSettings
{
    bool bCreateFlowSubsystemOnClients;
    bool bWarnAboutMissingIdentityTags;
    bool bLogOnSignalDisabled;
    bool bLogOnSignalPassthrough;
    bool bUseAdaptiveNodeTitles;
    FSoftClassPath DefaultExpectedOwnerClass;

};

class UFlowSubsystem : public UGameInstanceSubsystem
{
    TArray<class UFlowAsset*> InstancedTemplates;
    TMap<class UFlowAsset*, class TWeakObjectPtr<UObject>> RootInstances;
    TMap<class UFlowNode_SubGraph*, class UFlowAsset*> InstancedSubFlows;
    class UFlowSaveGame* LoadedSaveGame;
    FFlowSubsystemOnSaveGame OnSaveGame;
    void SimpleFlowEvent();
    FFlowSubsystemOnComponentRegistered OnComponentRegistered;
    void SimpleFlowComponentEvent(class UFlowComponent* Component);
    FFlowSubsystemOnComponentTagAdded OnComponentTagAdded;
    void TaggedFlowComponentEvent(class UFlowComponent* Component, const FGameplayTagContainer& Tags);
    FFlowSubsystemOnComponentUnregistered OnComponentUnregistered;
    void SimpleFlowComponentEvent(class UFlowComponent* Component);
    FFlowSubsystemOnComponentTagRemoved OnComponentTagRemoved;
    void TaggedFlowComponentEvent(class UFlowComponent* Component, const FGameplayTagContainer& Tags);

    void StartRootFlow(class UObject* Owner, class UFlowAsset* FlowAsset, const bool bAllowMultipleInstances);
    void OnGameSaved(class UFlowSaveGame* SaveGame);
    void OnGameLoaded(class UFlowSaveGame* SaveGame);
    void LoadSubFlow(class UFlowNode_SubGraph* SubGraphNode, FString SavedAssetInstanceName);
    void LoadRootFlow(class UObject* Owner, class UFlowAsset* FlowAsset, FString SavedAssetInstanceName);
    TSet<UFlowAsset*> GetRootInstancesByOwner(const class UObject* Owner);
    TMap<class UObject*, class UFlowAsset*> GetRootInstances();
    class UFlowAsset* GetRootFlow(const class UObject* Owner);
    class UFlowSaveGame* GetLoadedSaveGame();
    TMap<class UFlowNode_SubGraph*, class UFlowAsset*> GetInstancedSubFlows();
    TSet<UFlowComponent*> GetFlowComponentsByTags(const FGameplayTagContainer Tags, const EGameplayContainerMatchType MatchType, const TSubclassOf<class UFlowComponent> ComponentClass, const bool bExactMatch);
    TSet<UFlowComponent*> GetFlowComponentsByTag(const FGameplayTag Tag, const TSubclassOf<class UFlowComponent> ComponentClass, const bool bExactMatch);
    TSet<AActor*> GetFlowActorsByTags(const FGameplayTagContainer Tags, const EGameplayContainerMatchType MatchType, const TSubclassOf<class AActor> actorClass, const bool bExactMatch);
    TSet<AActor*> GetFlowActorsByTag(const FGameplayTag Tag, const TSubclassOf<class AActor> actorClass, const bool bExactMatch);
    TMap<class AActor*, class UFlowComponent*> GetFlowActorsAndComponentsByTags(const FGameplayTagContainer Tags, const EGameplayContainerMatchType MatchType, const TSubclassOf<class AActor> actorClass, const bool bExactMatch);
    TMap<class AActor*, class UFlowComponent*> GetFlowActorsAndComponentsByTag(const FGameplayTag Tag, const TSubclassOf<class AActor> actorClass, const bool bExactMatch);
    void FinishRootFlow(class UObject* Owner, class UFlowAsset* TemplateAsset, const EFlowFinishPolicy FinishPolicy);
    void FinishAllRootFlows(class UObject* Owner, const EFlowFinishPolicy FinishPolicy);
    void AbortActiveFlows();
};

class UMovieSceneFlowRepeaterSection : public UMovieSceneFlowSectionBase
{
    FString EventName;

};

class UMovieSceneFlowSectionBase : public UMovieSceneSection
{
};

class UMovieSceneFlowTrack : public UMovieSceneNameableTrack
{
    uint8 bFireEventsWhenForwards;
    uint8 bFireEventsWhenBackwards;
    EFireEventsAtPosition EventPosition;
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneFlowTriggerSection : public UMovieSceneFlowSectionBase
{
    FMovieSceneStringChannel StringChannel;

};

#endif
