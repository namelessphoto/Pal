#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkSettingsPerUser.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class AKAUDIO_API UAkSettingsPerUser : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath WwiseWindowsInstallationPath;
    
    UPROPERTY(Config, EditAnywhere)
    FFilePath WwiseMacInstallationPath;
    
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath RootOutputPathOverride;
    
    UPROPERTY(Config)
    FDirectoryPath GeneratedSoundBanksFolderOverride;
    
    UPROPERTY(Config, EditAnywhere)
    FString WaapiIPAddress;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 WaapiPort;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAutoConnectToWAAPI;
    
    UPROPERTY(Config, EditAnywhere)
    bool AutoSyncSelection;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 WaapiTranslatorTimeout;
    
    UPROPERTY(Config)
    bool SuppressGeneratedSoundBanksPathWarnings;
    
    UPROPERTY(Config)
    bool SoundDataGenerationSkipLanguage;
    
    UPROPERTY(Config, EditAnywhere)
    bool AskForWwiseAssetReload;
    
    UAkSettingsPerUser();

};

