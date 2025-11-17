#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "MeshSpaceDeformerToolActionPropertySet.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshSpaceDeformerToolActionPropertySet : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UMeshSpaceDeformerToolActionPropertySet();

    UFUNCTION()
    void ShiftToCenter();
    
};

