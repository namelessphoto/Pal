#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseMeshProcessingTool -FallbackName=BaseMeshProcessingTool
#include "SmoothMeshTool.generated.h"

class UDiffusionSmoothProperties;
class UImplicitSmoothProperties;
class UIterativeSmoothProperties;
class USmoothMeshToolProperties;
class USmoothWeightMapSetProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USmoothMeshTool : public UBaseMeshProcessingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    USmoothMeshToolProperties* SmoothProperties;
    
    UPROPERTY()
    UIterativeSmoothProperties* IterativeProperties;
    
    UPROPERTY()
    UDiffusionSmoothProperties* DiffusionProperties;
    
    UPROPERTY()
    UImplicitSmoothProperties* ImplicitProperties;
    
    UPROPERTY()
    USmoothWeightMapSetProperties* WeightMapProperties;
    
public:
    USmoothMeshTool();

};

