#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "GerstnerWave.generated.h"

USTRUCT(BlueprintType)
struct FGerstnerWave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WaveLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Amplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Steepness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Direction;
    
    UPROPERTY()
    FVector2D WaveVector;
    
    UPROPERTY()
    float WaveSpeed;
    
    UPROPERTY()
    float WKA;
    
    UPROPERTY()
    float Q;
    
    UPROPERTY()
    float PhaseOffset;
    
    WATER_API FGerstnerWave();
};

