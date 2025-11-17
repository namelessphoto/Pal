#pragma once
#include "CoreMinimal.h"
#include "EditMeshPolygonsToolActionPropertySet.h"
#include "EditMeshPolygonsToolUVActions.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet {
    GENERATED_BODY()
public:
    UEditMeshPolygonsToolUVActions();

    UFUNCTION()
    void PlanarProjection();
    
};

