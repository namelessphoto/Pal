#pragma once
#include "CoreMinimal.h"
#include "EditMeshPolygonsToolActionPropertySet.h"
#include "EditMeshPolygonsToolEdgeActions.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet {
    GENERATED_BODY()
public:
    UEditMeshPolygonsToolEdgeActions();

    UFUNCTION()
    void Weld();
    
    UFUNCTION()
    void Straighten();
    
    UFUNCTION()
    void FillHole();
    
    UFUNCTION()
    void Bridge();
    
    UFUNCTION()
    void Bevel();
    
};

