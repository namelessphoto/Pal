#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "GameFeaturesSubsystemSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class GAMEFEATURES_API UGameFeaturesSubsystemSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath GameFeaturesManagerClassName;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> DisabledPlugins;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> AdditionalPluginMetadataKeys;
    
    UGameFeaturesSubsystemSettings();

};

