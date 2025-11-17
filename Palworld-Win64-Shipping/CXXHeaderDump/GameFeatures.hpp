#ifndef UE4SS_SDK_GameFeatures_HPP
#define UE4SS_SDK_GameFeatures_HPP

#include "GameFeatures_enums.hpp"

struct FDataRegistrySourceToAdd
{
    FName RegistryToAddTo;
    int32 AssetPriority;
    uint8 bClientSource;
    uint8 bServerSource;
    TSoftObjectPtr<UDataTable> DataTableToAdd;
    TSoftObjectPtr<UCurveTable> CurveTableToAdd;

};

struct FGameFeatureComponentEntry
{
    TSoftClassPtr<AActor> actorClass;
    TSoftClassPtr<UActorComponent> ComponentClass;
    uint8 bClientComponent;
    uint8 bServerComponent;

};

struct FGameFeaturePluginIdentifier
{
};

struct FGameFeaturePluginStateMachineProperties
{
    class UGameFeatureData* GameFeatureData;

};

struct FInstallBundlePluginProtocolMetaData
{
};

class IGameFeatureStateChangeObserver : public IInterface
{
};

class UDefaultGameFeaturesProjectPolicies : public UGameFeaturesProjectPolicies
{
};

class UGameFeatureAction : public UObject
{
};

class UGameFeatureAction_AddCheats : public UGameFeatureAction
{
    TArray<TSoftClassPtr<UCheatManagerExtension>> CheatManagers;
    bool bLoadCheatManagersAsync;
    TArray<TWeakObjectPtr<UCheatManagerExtension>> SpawnedCheatManagers;

};

class UGameFeatureAction_AddComponents : public UGameFeatureAction
{
    TArray<FGameFeatureComponentEntry> ComponentList;

};

class UGameFeatureAction_AddWPContent : public UGameFeatureAction
{
    class UContentBundleDescriptor* ContentBundleDescriptor;

};

class UGameFeatureAction_DataRegistry : public UGameFeatureAction
{
    TArray<TSoftObjectPtr<UDataRegistry>> RegistriesToAdd;
    bool bPreloadInEditor;

};

class UGameFeatureAction_DataRegistrySource : public UGameFeatureAction
{
    TArray<FDataRegistrySourceToAdd> SourcesToAdd;
    bool bPreloadInEditor;

};

class UGameFeatureData : public UPrimaryDataAsset
{
    TArray<class UGameFeatureAction*> Actions;
    TArray<FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan;

};

class UGameFeaturePluginStateMachine : public UObject
{
    FGameFeaturePluginStateMachineProperties StateProperties;

};

class UGameFeaturesProjectPolicies : public UObject
{
};

class UGameFeaturesSubsystem : public UEngineSubsystem
{
    TMap<class FGameFeaturePluginIdentifier, class UGameFeaturePluginStateMachine*> GameFeaturePluginStateMachines;
    TArray<class UGameFeaturePluginStateMachine*> TerminalGameFeaturePluginStateMachines;
    TArray<class UObject*> Observers;
    class UGameFeaturesProjectPolicies* GameSpecificPolicies;

};

class UGameFeaturesSubsystemSettings : public UDeveloperSettings
{
    FSoftClassPath GameFeaturesManagerClassName;
    TArray<FString> DisabledPlugins;
    TArray<FString> AdditionalPluginMetadataKeys;

};

#endif
