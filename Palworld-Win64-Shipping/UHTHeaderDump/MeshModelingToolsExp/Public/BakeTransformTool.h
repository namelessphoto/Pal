#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "BakeTransformTool.generated.h"

class UBakeTransformToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeTransformTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UBakeTransformToolProperties* BasicProperties;
    
public:
    UBakeTransformTool();

};

