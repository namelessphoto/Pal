#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "PalDeveloperSettings.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class PAL_API UPalDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPalDeveloperSettings();

};

