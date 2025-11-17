#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=DLSSBlueprint -ObjectName=UDLSSMode -FallbackName=UDLSSMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAntiAliasingMethod -FallbackName=EAntiAliasingMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EWindowMode -FallbackName=EWindowMode
#include "EPalOptionGraphicsLevel.h"
#include "EPalOptionMapObjectDrawDistanceType.h"
#include "PalOptionGraphicsSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionGraphicsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EPalOptionGraphicsLevel GraphicsLevel;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<EWindowMode> WindowMode;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FIntPoint ScreenResolution;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bEnableVSync;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bEnableMotionBlur;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<EAntiAliasingMethod> AntiAliasingType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bEnableCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bEnableCameraRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PalRideCameraLengthRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float LODBias;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float DrawDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float GrassDrawDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bEnableShadow;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ShadowResolution;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 CommonQuality;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 ViewDistanceQuality;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 FoliageQuality;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 ShadowQuality;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EPalOptionMapObjectDrawDistanceType MapObjectDrawDistanceType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Brightness;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bEnableAutoContrast;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 TextureQuality;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UDLSSMode DLSSMode;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MaxFPS;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 ScreenPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bArachnophobiaMode;
    
    PAL_API FPalOptionGraphicsSettings();
};

