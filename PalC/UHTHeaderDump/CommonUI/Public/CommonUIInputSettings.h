#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CommonAnalogCursorSettings.h"
#include "UIInputAction.h"
#include "CommonUIInputSettings.generated.h"

UCLASS(DefaultConfig, MinimalAPI, Config=Input)
class UCommonUIInputSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere)
    bool bLinkCursorToGamepadFocus;
    
    UPROPERTY(Config, EditAnywhere)
    int32 UIActionProcessingPriority;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FUIInputAction> InputActions;
    
    UPROPERTY(Config)
    TArray<FUIInputAction> ActionOverrides;
    
    UPROPERTY(Config, EditAnywhere)
    FCommonAnalogCursorSettings AnalogCursorSettings;
    
public:
    UCommonUIInputSettings();

};

