#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2f -FallbackName=Box2f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ESlateBrushDrawType.h"
#include "ESlateBrushImageType.h"
#include "ESlateBrushMirrorType.h"
#include "ESlateBrushTileType.h"
#include "Margin.h"
#include "SlateBrushOutlineSettings.h"
#include "SlateColor.h"
#include "SlateBrush.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SLATECORE_API FSlateBrush {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    uint8 bIsDynamicallyLoaded: 1;
    
    UPROPERTY()
    uint8 bHasUObject: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESlateBrushDrawType> DrawAs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESlateBrushTileType> Tiling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESlateBrushMirrorType> Mirroring;
    
    UPROPERTY()
    TEnumAsByte<ESlateBrushImageType> ImageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin Margin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor TintColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrushOutlineSettings OutlineSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ResourceObject;
    
protected:
    UPROPERTY()
    FName ResourceName;
    
    UPROPERTY()
    FBox2f UVRegion;
    
public:
    FSlateBrush();
};

