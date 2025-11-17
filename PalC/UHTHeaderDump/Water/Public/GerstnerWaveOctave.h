#pragma once
#include "CoreMinimal.h"
#include "GerstnerWaveOctave.generated.h"

USTRUCT(BlueprintType)
struct FGerstnerWaveOctave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AmplitudeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MainDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpreadAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUniformSpread;
    
    WATER_API FGerstnerWaveOctave();
};

