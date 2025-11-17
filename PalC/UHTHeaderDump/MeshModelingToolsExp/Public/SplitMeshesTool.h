#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "SplitMeshesTool.generated.h"

class UCreateMeshObjectTypeProperties;
class USplitMeshesToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USplitMeshesTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
    UPROPERTY()
    USplitMeshesToolProperties* BasicProperties;
    
    UPROPERTY()
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    USplitMeshesTool();

};

