#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "ESlateBrushRoundingType.h"
#include "SlateColor.h"
#include "SlateBrushOutlineSettings.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FSlateBrushOutlineSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector4 CornerRadii;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESlateBrushRoundingType> RoundingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseBrushTransparency;
    
    FSlateBrushOutlineSettings();
};

