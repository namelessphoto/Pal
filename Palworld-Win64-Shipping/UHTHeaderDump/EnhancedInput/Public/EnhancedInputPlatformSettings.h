#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=PlatformSettings -FallbackName=PlatformSettings
#include "Templates/SubclassOf.h"
#include "EnhancedInputPlatformSettings.generated.h"

class UEnhancedInputPlatformData;

UCLASS(DefaultConfig, Config=Input)
class ENHANCEDINPUT_API UEnhancedInputPlatformSettings : public UPlatformSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftClassPtr<UEnhancedInputPlatformData>> InputData;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<UEnhancedInputPlatformData>> InputDataClasses;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShouldLogMappingContextRedirects;
    
public:
    UEnhancedInputPlatformSettings();

};

