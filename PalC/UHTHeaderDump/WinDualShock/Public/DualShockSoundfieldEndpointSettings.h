#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=SoundfieldEndpointSettingsBase -FallbackName=SoundfieldEndpointSettingsBase
#include "DualShockSoundfieldEndpointSettings.generated.h"

UCLASS(EditInlineNew)
class UDualShockSoundfieldEndpointSettings : public USoundfieldEndpointSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 ControllerIndex;
    
    UDualShockSoundfieldEndpointSettings();

};

