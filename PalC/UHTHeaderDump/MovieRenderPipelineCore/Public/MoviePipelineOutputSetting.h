#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "MoviePipelineSetting.h"
#include "MoviePipelineOutputSetting.generated.h"

UCLASS()
class MOVIERENDERPIPELINECORE_API UMoviePipelineOutputSetting : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDirectoryPath OutputDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FilenameFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntPoint OutputResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCustomFrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFrameRate OutputFrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideExistingOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HandleFrameCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OutputFrameStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCustomPlaybackRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CustomStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CustomEndFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VersionNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoVersion;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 ZeroPadFrameNumbers;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 FrameNumberOffset;
    
    UPROPERTY(BlueprintReadWrite)
    bool bFlushDiskWritesPerShot;
    
    UMoviePipelineOutputSetting();

};

