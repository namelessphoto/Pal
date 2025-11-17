#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RawAnimSequenceTrack -FallbackName=RawAnimSequenceTrack
#include "ParticleTransformTrack.generated.h"

USTRUCT()
struct FParticleTransformTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRawAnimSequenceTrack RawTransformTrack;
    
    UPROPERTY()
    float BeginOffset;
    
    UPROPERTY()
    bool bDeactivateOnEnd;
    
    UPROPERTY()
    TArray<float> KeyTimestamps;
    
    CHAOSCACHING_API FParticleTransformTrack();
};

