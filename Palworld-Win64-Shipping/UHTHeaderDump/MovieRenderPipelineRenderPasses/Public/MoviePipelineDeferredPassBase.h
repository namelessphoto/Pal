#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ActorLayerUtilities -ObjectName=ActorLayer -FallbackName=ActorLayer
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "MoviePipelineImagePassBase.h"
#include "MoviePipelinePostProcessPass.h"
#include "MoviePipelineDeferredPassBase.generated.h"

class UMaterialInterface;

UCLASS()
class MOVIERENDERPIPELINERENDERPASSES_API UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAccumulatorIncludesAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableMultisampleEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUse32BitPostProcessMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRenderMainPass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAddDefaultLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FActorLayer> ActorLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSoftObjectPath> DataLayers;
    
protected:
    UPROPERTY(DuplicateTransient, Transient)
    TArray<UMaterialInterface*> ActivePostProcessMaterials;
    
    UPROPERTY(DuplicateTransient, Transient)
    UMaterialInterface* StencilLayerMaterial;
    
public:
    UMoviePipelineDeferredPassBase();

};

