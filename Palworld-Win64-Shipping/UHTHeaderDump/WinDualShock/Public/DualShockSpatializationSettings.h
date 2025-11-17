#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=SoundfieldEncodingSettingsBase -FallbackName=SoundfieldEncodingSettingsBase
#include "DualShockSpatializationSettings.generated.h"

UCLASS(EditInlineNew)
class UDualShockSpatializationSettings : public USoundfieldEncodingSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Spread;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    bool Passthrough;
    
    UDualShockSpatializationSettings();

};

