#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "MoviePipelineFilenameResolveParams.generated.h"

class UMoviePipelineExecutorJob;
class UMoviePipelineExecutorShot;

USTRUCT(BlueprintType)
struct FMoviePipelineFilenameResolveParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FrameNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FrameNumberShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FrameNumberRel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FrameNumberShotRel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString CameraNameOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ShotNameOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ZeroPadFrameNumberCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceRelativeFrameNumbers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FileNameOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, FString> FileNameFormatOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, FString> FileMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDateTime InitializationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InitializationVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMoviePipelineExecutorJob* Job;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMoviePipelineExecutorShot* ShotOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AdditionalFrameNumberOffset;
    
    MOVIERENDERPIPELINECORE_API FMoviePipelineFilenameResolveParams();
};

