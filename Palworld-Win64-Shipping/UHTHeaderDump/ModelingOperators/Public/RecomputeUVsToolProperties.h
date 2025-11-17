#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ERecomputeUVsPropertiesIslandMode.h"
#include "ERecomputeUVsPropertiesLayoutType.h"
#include "ERecomputeUVsPropertiesUnwrapType.h"
#include "ERecomputeUVsToolOrientationMode.h"
#include "RecomputeUVsToolProperties.generated.h"

UCLASS(NonTransient)
class MODELINGOPERATORS_API URecomputeUVsToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bEnablePolygroupSupport;
    
    UPROPERTY(EditAnywhere)
    ERecomputeUVsPropertiesIslandMode IslandGeneration;
    
    UPROPERTY(EditAnywhere)
    ERecomputeUVsPropertiesUnwrapType UnwrapType;
    
    UPROPERTY(EditAnywhere)
    ERecomputeUVsToolOrientationMode AutoRotation;
    
    UPROPERTY(EditAnywhere)
    bool bPreserveIrregularity;
    
    UPROPERTY(EditAnywhere)
    int32 SmoothingSteps;
    
    UPROPERTY(EditAnywhere)
    float SmoothingAlpha;
    
    UPROPERTY(EditAnywhere)
    float MergingDistortionThreshold;
    
    UPROPERTY(EditAnywhere)
    float MergingAngleThreshold;
    
    UPROPERTY(EditAnywhere)
    ERecomputeUVsPropertiesLayoutType LayoutType;
    
    UPROPERTY(EditAnywhere)
    int32 TextureResolution;
    
    UPROPERTY(EditAnywhere)
    float NormalizeScale;
    
    URecomputeUVsToolProperties();

};

