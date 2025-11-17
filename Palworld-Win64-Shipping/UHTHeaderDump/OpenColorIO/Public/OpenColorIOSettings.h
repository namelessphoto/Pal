#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "OpenColorIOSettings.generated.h"

UCLASS(DefaultConfig)
class OPENCOLORIO_API UOpenColorIOSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    uint8 bUseLegacyProcessor: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bUse32fLUT: 1;
    
    UOpenColorIOSettings();

};

