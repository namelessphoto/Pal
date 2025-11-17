#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
#include "WaveTableSettings.generated.h"

USTRUCT()
struct WAVETABLE_API FWaveTableSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFilePath FilePath;
    
    UPROPERTY(EditAnywhere)
    int32 ChannelIndex;
    
    UPROPERTY(EditAnywhere)
    float Phase;
    
    UPROPERTY(EditAnywhere)
    float Top;
    
    UPROPERTY(EditAnywhere)
    float Tail;
    
    UPROPERTY(EditAnywhere)
    float FadeIn;
    
    UPROPERTY(EditAnywhere)
    float FadeOut;
    
    UPROPERTY(EditAnywhere)
    bool bNormalize;
    
    UPROPERTY(EditAnywhere)
    bool bRemoveOffset;
    
    UPROPERTY()
    TArray<float> SourcePCMData;
    
    FWaveTableSettings();
};

