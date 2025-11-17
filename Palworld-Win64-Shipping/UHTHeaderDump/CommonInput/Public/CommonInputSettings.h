#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=PerPlatformSettings -FallbackName=PerPlatformSettings
#include "CommonInputPlatformBaseData.h"
#include "Templates/SubclassOf.h"
#include "CommonInputSettings.generated.h"

class UCommonInputActionDomainTable;
class UCommonUIInputData;

UCLASS(DefaultConfig, Config=Game)
class COMMONINPUT_API UCommonInputSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UCommonUIInputData> InputData;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformSettings PlatformInput;
    
    UPROPERTY(Config)
    TMap<FName, FCommonInputPlatformBaseData> CommonInputPlatformData;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableInputMethodThrashingProtection;
    
    UPROPERTY(Config, EditAnywhere)
    int32 InputMethodThrashingLimit;
    
    UPROPERTY(Config, EditAnywhere)
    double InputMethodThrashingWindowInSeconds;
    
    UPROPERTY(Config, EditAnywhere)
    double InputMethodThrashingCooldownInSeconds;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAllowOutOfFocusDeviceInput;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableDefaultInputConfig;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UCommonInputActionDomainTable> ActionDomainTable;
    
    UPROPERTY(Transient)
    TSubclassOf<UCommonUIInputData> InputDataClass;
    
    UPROPERTY(Transient)
    UCommonInputActionDomainTable* ActionDomainTablePtr;
    
public:
    UCommonInputSettings();

};

