#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "FlowSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class FLOW_API UFlowSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bCreateFlowSubsystemOnClients;
    
    UPROPERTY(Config, EditAnywhere)
    bool bWarnAboutMissingIdentityTags;
    
    UPROPERTY(Config, EditAnywhere)
    bool bLogOnSignalDisabled;
    
    UPROPERTY(Config, EditAnywhere)
    bool bLogOnSignalPassthrough;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseAdaptiveNodeTitles;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath DefaultExpectedOwnerClass;
    
    UFlowSettings();

};

