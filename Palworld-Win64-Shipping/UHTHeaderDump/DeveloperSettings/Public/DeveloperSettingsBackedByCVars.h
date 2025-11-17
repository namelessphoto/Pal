#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettings.h"
#include "DeveloperSettingsBackedByCVars.generated.h"

UCLASS(Abstract)
class DEVELOPERSETTINGS_API UDeveloperSettingsBackedByCVars : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UDeveloperSettingsBackedByCVars();

};

