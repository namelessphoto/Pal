#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MoviePipelineRenderPass -FallbackName=MoviePipelineRenderPass
#include "MoviePipelineBurnInSetting.generated.h"

class UMoviePipelineBurnInWidget;
class UTextureRenderTarget2D;

UCLASS()
class MOVIERENDERPIPELINESETTINGS_API UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftClassPath BurnInClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCompositeOntoFinalImage;
    
private:
    UPROPERTY(Transient)
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(Instanced, Transient)
    TArray<UMoviePipelineBurnInWidget*> BurnInWidgetInstances;
    
public:
    UMoviePipelineBurnInSetting();

};

