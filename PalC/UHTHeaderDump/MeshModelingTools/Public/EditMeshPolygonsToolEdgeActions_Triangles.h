#pragma once
#include "CoreMinimal.h"
#include "EditMeshPolygonsToolActionPropertySet.h"
#include "EditMeshPolygonsToolEdgeActions_Triangles.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet {
    GENERATED_BODY()
public:
    UEditMeshPolygonsToolEdgeActions_Triangles();

    UFUNCTION()
    void Weld();
    
    UFUNCTION()
    void Split();
    
    UFUNCTION()
    void Flip();
    
    UFUNCTION()
    void FillHole();
    
    UFUNCTION()
    void Collapse();
    
};

