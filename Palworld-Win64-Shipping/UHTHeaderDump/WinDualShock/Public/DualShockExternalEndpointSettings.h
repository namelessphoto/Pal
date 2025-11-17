#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=AudioEndpointSettingsBase -FallbackName=AudioEndpointSettingsBase
#include "DualShockExternalEndpointSettings.generated.h"

UCLASS(EditInlineNew)
class UDualShockExternalEndpointSettings : public UAudioEndpointSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 ControllerIndex;
    
    UDualShockExternalEndpointSettings();

};

