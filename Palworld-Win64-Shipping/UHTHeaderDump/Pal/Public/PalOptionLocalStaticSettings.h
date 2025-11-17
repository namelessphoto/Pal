#pragma once
#include "CoreMinimal.h"
#include "EPalOptionMapObjectDrawDistanceType.h"
#include "PalOptionValueFloat.h"
#include "PalOptionLocalStaticSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionLocalStaticSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat MouseSensitivity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat MouseAimSensitivity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat LeftStickThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat RightStickSensitivity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat RightStickAimSensitivity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat RightStickThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat PalRideCameraLengthRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat FOV;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalOptionMapObjectDrawDistanceType, int32> MapObjectDrawDistanceMaxMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat DamageTextScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat DamageTextMaxNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat ChatUICloseDelayTime;
    
    PAL_API FPalOptionLocalStaticSettings();
};

