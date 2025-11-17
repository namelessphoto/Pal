#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineImageSequenceOutputBase.h"
#include "MoviePipelineImageSequenceOutput_PNG.generated.h"

UCLASS()
class MOVIERENDERPIPELINERENDERPASSES_API UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWriteAlpha;
    
    UMoviePipelineImageSequenceOutput_PNG();

};

