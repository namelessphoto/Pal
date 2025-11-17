#ifndef UE4SS_SDK_MetasoundEngine_HPP
#define UE4SS_SDK_MetasoundEngine_HPP

#include "MetasoundEngine_enums.hpp"

struct FDefaultMetaSoundAssetAutoUpdateSettings
{
    FSoftObjectPath Metasound;

};

struct FMetaSoundAssetDirectory
{
    FDirectoryPath Directory;

};

struct FMetaSoundAsyncAssetDependencies
{
    class UObject* Metasound;

};

class UMetaSoundAssetSubsystem : public UEngineSubsystem
{
    TArray<FMetaSoundAsyncAssetDependencies> LoadingDependencies;

    void UnregisterAssetClassesInDirectories(const TArray<FMetaSoundAssetDirectory>& Directories);
    void RegisterAssetClassesInDirectories(const TArray<FMetaSoundAssetDirectory>& Directories);
};

class UMetaSoundPatch : public UObject
{
    FMetasoundFrontendDocument RootMetaSoundDocument;
    TSet<FString> ReferencedAssetClassKeys;
    TSet<UObject*> ReferencedAssetClassObjects;
    TSet<FSoftObjectPath> ReferenceAssetClassCache;
    FGuid AssetClassID;

};

class UMetaSoundSettings : public UDeveloperSettings
{
    bool bAutoUpdateEnabled;
    TArray<FMetasoundFrontendClassName> AutoUpdateDenylist;
    TArray<FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist;
    bool bAutoUpdateLogWarningOnDroppedConnection;
    TArray<FDirectoryPath> DirectoriesToRegister;
    int32 DenyListCacheChangeID;

};

class UMetaSoundSource : public USoundWaveProcedural
{
    FMetasoundFrontendDocument RootMetaSoundDocument;
    TSet<FString> ReferencedAssetClassKeys;
    TSet<UObject*> ReferencedAssetClassObjects;
    TSet<FSoftObjectPath> ReferenceAssetClassCache;
    EMetasoundSourceAudioFormat OutputFormat;
    FGuid AssetClassID;

};

class UMetasoundEditorGraphBase : public UEdGraph
{
};

#endif
