#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "EWaveTableCurve.h"
#include "WaveTableTransform.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct WAVETABLE_API FWaveTableTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWaveTableCurve Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Scalar;
    
    UPROPERTY()
    FRichCurve CurveCustom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* CurveShared;
    
    UPROPERTY()
    TArray<float> WaveTable;
    
    FWaveTableTransform();
};

