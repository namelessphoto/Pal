#pragma once
#include "CoreMinimal.h"
#include "PlatformSettingsInstances.generated.h"

class UPlatformSettings;

USTRUCT(BlueprintType)
struct FPlatformSettingsInstances {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UPlatformSettings* PlatformInstance;
    
    UPROPERTY(Transient)
    TMap<FName, UPlatformSettings*> OtherPlatforms;
    
    DEVELOPERSETTINGS_API FPlatformSettingsInstances();
};

