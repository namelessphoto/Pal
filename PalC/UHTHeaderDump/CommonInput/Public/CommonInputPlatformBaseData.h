#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "Templates/SubclassOf.h"
#include "CommonInputPlatformBaseData.generated.h"

class UCommonInputBaseControllerData;

USTRUCT(BlueprintType)
struct COMMONINPUT_API FCommonInputPlatformBaseData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    ECommonInputType DefaultInputType;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSupportsMouseAndKeyboard;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSupportsGamepad;
    
    UPROPERTY(EditDefaultsOnly)
    FName DefaultGamepadName;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCanChangeGamepadType;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSupportsTouch;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftClassPtr<UCommonInputBaseControllerData>> ControllerData;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<UCommonInputBaseControllerData>> ControllerDataClasses;
    
public:
    FCommonInputPlatformBaseData();
};

