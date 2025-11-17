#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "MoviePipelineCommandLineEncoderSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig)
class MOVIERENDERPIPELINECORE_API UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString ExecutablePath;
    
    UPROPERTY(EditAnywhere)
    FText CodecHelpText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString VideoCodec;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString AudioCodec;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString OutputFileExtension;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString CommandLineFormat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString VideoInputStringFormat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString AudioInputStringFormat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString EncodeSettings_Low;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString EncodeSettings_Med;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString EncodeSettings_High;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString EncodeSettings_Epic;
    
    UMoviePipelineCommandLineEncoderSettings();

};

