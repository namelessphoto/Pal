#pragma once
#include "CoreMinimal.h"
#include "CommonAnalogCursorSettings.generated.h"

USTRUCT(BlueprintType)
struct FCommonAnalogCursorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    int32 PreprocessorPriority;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnableCursorAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float CursorAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float CursorMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float CursorDeadZone;
    
    UPROPERTY(EditDefaultsOnly)
    float HoverSlowdownFactor;
    
    UPROPERTY(EditDefaultsOnly)
    float ScrollDeadZone;
    
    UPROPERTY(EditDefaultsOnly)
    float ScrollUpdatePeriod;
    
    UPROPERTY(EditDefaultsOnly)
    float ScrollMultiplier;
    
    COMMONUI_API FCommonAnalogCursorSettings();
};

