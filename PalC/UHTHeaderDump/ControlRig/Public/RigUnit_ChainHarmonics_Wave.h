#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigAnimEasingType.h"
#include "RigUnit_ChainHarmonics_Wave.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ChainHarmonics_Wave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector WaveFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector WaveAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector WaveOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector WaveNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WaveMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WaveMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EControlRigAnimEasingType WaveEase;
    
    FRigUnit_ChainHarmonics_Wave();
};

