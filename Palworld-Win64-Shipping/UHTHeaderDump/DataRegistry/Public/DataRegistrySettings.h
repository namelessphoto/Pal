#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "DataRegistrySettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class DATAREGISTRY_API UDataRegistrySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FDirectoryPath> DirectoriesToScan;
    
    UPROPERTY(Config, EditAnywhere)
    bool bInitializeAllLoadedRegistries;
    
    UPROPERTY(Config, EditAnywhere)
    bool bIgnoreMissingCookedAssetRegistryData;
    
    UDataRegistrySettings();

};

