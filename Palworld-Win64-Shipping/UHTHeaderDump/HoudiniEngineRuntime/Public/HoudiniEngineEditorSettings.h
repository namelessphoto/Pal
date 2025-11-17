#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "HoudiniEngineEditorSettings.generated.h"

UCLASS(Config=HoudiniEngine)
class HOUDINIENGINERUNTIME_API UHoudiniEngineEditorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UHoudiniEngineEditorSettings();

};

