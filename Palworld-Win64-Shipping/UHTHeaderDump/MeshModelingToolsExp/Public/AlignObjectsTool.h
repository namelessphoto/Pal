#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "AlignObjectsTool.generated.h"

class UAlignObjectsToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UAlignObjectsTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAlignObjectsToolProperties* AlignProps;
    
    UAlignObjectsTool();

};

