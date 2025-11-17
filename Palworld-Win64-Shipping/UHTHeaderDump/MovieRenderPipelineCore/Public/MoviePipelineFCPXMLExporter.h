#pragma once
#include "CoreMinimal.h"
#include "FCPXMLExportDataSource.h"
#include "MoviePipelineOutputBase.h"
#include "MoviePipelineFCPXMLExporter.generated.h"

UCLASS()
class MOVIERENDERPIPELINECORE_API UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FileNameFormatOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCPXMLExportDataSource DataSource;
    
    UMoviePipelineFCPXMLExporter();

};

