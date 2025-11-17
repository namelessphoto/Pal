#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseMeshProcessingTool -FallbackName=BaseMeshProcessingTool
#include "OffsetMeshTool.generated.h"

class UImplicitOffsetProperties;
class UIterativeOffsetProperties;
class UOffsetMeshToolProperties;
class UOffsetWeightMapSetProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UOffsetMeshTool : public UBaseMeshProcessingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UOffsetMeshToolProperties* OffsetProperties;
    
    UPROPERTY()
    UIterativeOffsetProperties* IterativeProperties;
    
    UPROPERTY()
    UImplicitOffsetProperties* ImplicitProperties;
    
    UPROPERTY()
    UOffsetWeightMapSetProperties* WeightMapProperties;
    
public:
    UOffsetMeshTool();

};

