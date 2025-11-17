#pragma once
#include "CoreMinimal.h"
#include "EPalOptionMapObjectDrawDistanceType.h"
#include "HistoryServerWorld.h"
#include "PalOptionCommonSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionCommonSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PalRideCameraLengthRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bEnableMotionBlur;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bEnableCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FHistoryServerWorld> HistoryServerWorldGUIDs;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Brightness;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bDisableAutoPickupItemInOverflowWeight;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bDisableGuildJoinRequest;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bHideCraftExpLog;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 ScreenPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EPalOptionMapObjectDrawDistanceType MapObjectDrawDistanceType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bArachnophobiaMode;
    
    PAL_API FPalOptionCommonSettings();
};

