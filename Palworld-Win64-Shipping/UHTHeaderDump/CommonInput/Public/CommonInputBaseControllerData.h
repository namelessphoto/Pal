#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CommonInputKeyBrushConfiguration.h"
#include "CommonInputKeySetBrushConfiguration.h"
#include "ECommonInputType.h"
#include "InputDeviceIdentifierPair.h"
#include "CommonInputBaseControllerData.generated.h"

class UTexture2D;

UCLASS(Abstract)
class COMMONINPUT_API UCommonInputBaseControllerData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ECommonInputType InputType;
    
    UPROPERTY(EditDefaultsOnly)
    FName GamepadName;
    
    UPROPERTY(EditDefaultsOnly)
    FText GamepadDisplayName;
    
    UPROPERTY(EditDefaultsOnly)
    FText GamepadCategory;
    
    UPROPERTY(EditDefaultsOnly)
    FText GamepadPlatformName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FInputDeviceIdentifierPair> GamepadHardwareIdMapping;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> ControllerTexture;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> ControllerButtonMaskTexture;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCommonInputKeyBrushConfiguration> InputBrushDataMap;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCommonInputKeySetBrushConfiguration> InputBrushKeySets;
    
    UCommonInputBaseControllerData();

    UFUNCTION()
    static TArray<FName> GetRegisteredGamepads();
    
};

