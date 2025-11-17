#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolExclusiveToolAPI -FallbackName=InteractiveToolExclusiveToolAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "ConvertMeshesTool.generated.h"

class UConvertMeshesToolProperties;
class UCreateMeshObjectTypeProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UConvertMeshesTool : public UMultiSelectionMeshEditingTool, public IInteractiveToolExclusiveToolAPI {
    GENERATED_BODY()
public:
    UPROPERTY()
    UConvertMeshesToolProperties* BasicProperties;
    
    UPROPERTY()
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UConvertMeshesTool();


    // Fix for true pure virtual functions not being implemented
};

