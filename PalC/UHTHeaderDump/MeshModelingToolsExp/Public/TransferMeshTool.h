#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolExclusiveToolAPI -FallbackName=InteractiveToolExclusiveToolAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "TransferMeshTool.generated.h"

class UTransferMeshToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UTransferMeshTool : public UMultiSelectionMeshEditingTool, public IInteractiveToolExclusiveToolAPI {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTransferMeshToolProperties* BasicProperties;
    
    UTransferMeshTool();


    // Fix for true pure virtual functions not being implemented
};

