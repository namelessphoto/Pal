#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAntiAliasingMethod -FallbackName=EAntiAliasingMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalOptionGraphicsLevel.h"
#include "EPalOptionMapObjectDrawDistanceType.h"
#include "PalOptionGraphicsPresetRow.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionGraphicsPresetRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EPalOptionGraphicsLevel GraphicsLevel;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<EAntiAliasingMethod> AntiAliasingType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 CommonQuality;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 ViewDistanceQuality;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EPalOptionMapObjectDrawDistanceType MapObjectDrawDistanceType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 FoliageQuality;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 ShadowQuality;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 TextureQuality;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bEnableMotionBlur;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 ScreenPercentage;
    
    PAL_API FPalOptionGraphicsPresetRow();
};

