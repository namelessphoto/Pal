#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettingsBackedByCVars -FallbackName=DeveloperSettingsBackedByCVars
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=PerPlatformSettings -FallbackName=PerPlatformSettings
#include "EnhancedInputDeveloperSettings.generated.h"

UCLASS(DefaultConfig, Config=Input)
class ENHANCEDINPUT_API UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPerPlatformSettings PlatformSettings;
    
    UPROPERTY(EditAnywhere)
    bool bShouldOnlyTriggerLastActionInChord;
    
    UEnhancedInputDeveloperSettings();

};

