#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineDeferredPassBase.h"
#include "MoviePipelineDeferredPass_PathTracer.generated.h"

UCLASS()
class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bReferenceMotionBlur;
    
    UMoviePipelineDeferredPass_PathTracer();

};

