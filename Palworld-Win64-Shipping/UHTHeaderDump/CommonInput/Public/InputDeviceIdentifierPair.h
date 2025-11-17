#pragma once
#include "CoreMinimal.h"
#include "InputDeviceIdentifierPair.generated.h"

USTRUCT(BlueprintType)
struct FInputDeviceIdentifierPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName InputDeviceName;
    
    UPROPERTY(EditDefaultsOnly)
    FString HardwareDeviceIdentifier;
    
    COMMONINPUT_API FInputDeviceIdentifierPair();
};

