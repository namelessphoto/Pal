#pragma once
#include "CoreMinimal.h"
#include "PerPlatformSettings.generated.h"

class UPlatformSettings;

USTRUCT(BlueprintType)
struct DEVELOPERSETTINGS_API FPerPlatformSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, EditFixedSize, Instanced, Transient)
    TArray<UPlatformSettings*> Settings;
    
public:
    FPerPlatformSettings();
};

