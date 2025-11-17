#pragma once
#include "CoreMinimal.h"
#include "EditMeshPolygonsToolActionPropertySet.h"
#include "EditMeshPolygonsToolAcceptCancelAction.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UEditMeshPolygonsToolAcceptCancelAction : public UEditMeshPolygonsToolActionPropertySet {
    GENERATED_BODY()
public:
    UEditMeshPolygonsToolAcceptCancelAction();

    UFUNCTION()
    void Cancel();
    
    UFUNCTION()
    void Apply();
    
};

