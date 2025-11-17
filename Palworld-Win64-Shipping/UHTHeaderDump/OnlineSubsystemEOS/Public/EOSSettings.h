#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeOptionsBase -FallbackName=RuntimeOptionsBase
#include "ArtifactSettings.h"
#include "EOSSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Engine)
class ONLINESUBSYSTEMEOS_API UEOSSettings : public URuntimeOptionsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString CacheDir;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString DefaultArtifactName;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 TickBudgetInMilliseconds;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bEnableOverlay;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bEnableSocialOverlay;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bEnableEditorOverlay;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShouldEnforceBeingLaunchedByEGS;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TArray<FString> TitleStorageTags;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 TitleStorageReadChunkLength;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TArray<FArtifactSettings> Artifacts;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bUseEAS;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bUseEOSConnect;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bMirrorStatsToEOS;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bMirrorAchievementsToEOS;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bUseEOSSessions;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bMirrorPresenceToEAS;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bUseDeviceIdLogin;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bOverrideDedicatedServer;
    
    UEOSSettings();

};

