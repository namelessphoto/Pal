#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalOptionWorldSettings.h"
#include "PalGameWorldSettings.generated.h"

UCLASS(Config=PalWorldSettings)
class UPalGameWorldSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FPalOptionWorldSettings OptionSettings;
    
    UPalGameWorldSettings();

};

