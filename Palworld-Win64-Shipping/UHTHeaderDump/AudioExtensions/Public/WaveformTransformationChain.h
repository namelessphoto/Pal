#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WaveformTransformationChain.generated.h"

class UWaveformTransformationBase;

UCLASS(EditInlineNew)
class AUDIOEXTENSIONS_API UWaveformTransformationChain : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UWaveformTransformationBase*> Transformations;
    
    UWaveformTransformationChain();

};

