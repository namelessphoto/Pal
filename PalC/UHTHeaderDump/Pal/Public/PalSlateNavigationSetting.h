#pragma once
#include "CoreMinimal.h"
#include "PalSlateNavigationSetting.generated.h"

USTRUCT(BlueprintType)
struct FPalSlateNavigationSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsEnableAnalogNavigation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsEnableLeftKeyNavigation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsEnableRightKeyNavigation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsEnableDownKeyNavigation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsEnableUpKeyNavigation;
    
    PAL_API FPalSlateNavigationSetting();
};

