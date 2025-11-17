#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=MetasoundFrontend -ObjectName=MetasoundFrontendClassName -FallbackName=MetasoundFrontendClassName
#include "DefaultMetaSoundAssetAutoUpdateSettings.h"
#include "MetaSoundSettings.generated.h"

UCLASS(DefaultConfig, Config=Metasound)
class METASOUNDENGINE_API UMetaSoundSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bAutoUpdateEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FMetasoundFrontendClassName> AutoUpdateDenylist;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAutoUpdateLogWarningOnDroppedConnection;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FDirectoryPath> DirectoriesToRegister;
    
    UPROPERTY(Transient)
    int32 DenyListCacheChangeID;
    
    UMetaSoundSettings();

};

