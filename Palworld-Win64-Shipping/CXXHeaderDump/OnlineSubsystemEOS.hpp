#ifndef UE4SS_SDK_OnlineSubsystemEOS_HPP
#define UE4SS_SDK_OnlineSubsystemEOS_HPP

struct FArtifactSettings
{
    FString ArtifactName;
    FString ClientId;
    FString ClientSecret;
    FString ProductId;
    FString SandboxId;
    FString DeploymentId;
    FString EncryptionKey;

};

class UDEPRECATED_EOSArtifactSettings : public UDataAsset
{
};

class UEOSSettings : public URuntimeOptionsBase
{
    FString CacheDir;
    FString DefaultArtifactName;
    int32 TickBudgetInMilliseconds;
    bool bEnableOverlay;
    bool bEnableSocialOverlay;
    bool bEnableEditorOverlay;
    bool bShouldEnforceBeingLaunchedByEGS;
    TArray<FString> TitleStorageTags;
    int32 TitleStorageReadChunkLength;
    TArray<FArtifactSettings> Artifacts;
    bool bUseEAS;
    bool bUseEOSConnect;
    bool bMirrorStatsToEOS;
    bool bMirrorAchievementsToEOS;
    bool bUseEOSSessions;
    bool bMirrorPresenceToEAS;
    bool bUseDeviceIdLogin;
    bool bOverrideDedicatedServer;

};

class UNetDriverEOS : public UNetDriverEOSBase
{
};

#endif
