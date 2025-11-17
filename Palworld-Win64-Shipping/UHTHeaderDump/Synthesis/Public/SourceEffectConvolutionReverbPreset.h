#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "ESubmixEffectConvolutionReverbBlockSize.h"
#include "SourceEffectConvolutionReverbSettings.h"
#include "SourceEffectConvolutionReverbPreset.generated.h"

class UAudioImpulseResponse;

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectConvolutionReverbPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAudioImpulseResponse* ImpulseResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSourceEffectConvolutionReverbSettings Settings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ESubmixEffectConvolutionReverbBlockSize blockSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bEnableHardwareAcceleration;
    
    USourceEffectConvolutionReverbPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectConvolutionReverbSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse);
    
};

