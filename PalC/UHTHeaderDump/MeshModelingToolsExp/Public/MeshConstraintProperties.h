#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EGroupBoundaryConstraint.h"
#include "EMaterialBoundaryConstraint.h"
#include "EMeshBoundaryConstraint.h"
#include "MeshConstraintProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshConstraintProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPreserveSharpEdges;
    
    UPROPERTY(EditAnywhere)
    EMeshBoundaryConstraint MeshBoundaryConstraint;
    
    UPROPERTY(EditAnywhere)
    EGroupBoundaryConstraint GroupBoundaryConstraint;
    
    UPROPERTY(EditAnywhere)
    EMaterialBoundaryConstraint MaterialBoundaryConstraint;
    
    UPROPERTY(EditAnywhere)
    bool bPreventNormalFlips;
    
    UPROPERTY(EditAnywhere)
    bool bPreventTinyTriangles;
    
    UMeshConstraintProperties();

};

