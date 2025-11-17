#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MoviePipelineViewFamilySetting -FallbackName=MoviePipelineViewFamilySetting
#include "EFSR2MoviePipelineQuality.h"
#include "FSR2MoviePipelineSettings.generated.h"

UCLASS()
class FSR2MOVIERENDERPIPELINE_API UFSR2MoviePipelineSettings : public UMoviePipelineViewFamilySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFSR2MoviePipelineQuality FSR2Quality;
    
    UFSR2MoviePipelineSettings();

};

