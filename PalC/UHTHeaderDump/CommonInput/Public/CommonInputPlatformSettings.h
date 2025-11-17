#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=PlatformSettings -FallbackName=PlatformSettings
#include "ECommonInputType.h"
#include "Templates/SubclassOf.h"
#include "CommonInputPlatformSettings.generated.h"

class UCommonInputBaseControllerData;

UCLASS(DefaultConfig, Config=Game)
class COMMONINPUT_API UCommonInputPlatformSettings : public UPlatformSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    ECommonInputType DefaultInputType;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSupportsMouseAndKeyboard;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSupportsTouch;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSupportsGamepad;
    
    UPROPERTY(Config, EditAnywhere)
    FName DefaultGamepadName;
    
    UPROPERTY(Config, EditAnywhere)
    bool bCanChangeGamepadType;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftClassPtr<UCommonInputBaseControllerData>> ControllerData;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<UCommonInputBaseControllerData>> ControllerDataClasses;
    
public:
    UCommonInputPlatformSettings();

};

