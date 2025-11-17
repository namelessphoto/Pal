#pragma once
#include "CoreMinimal.h"
#include "EditMeshPolygonsToolActionPropertySet.h"
#include "EditMeshPolygonsToolActions.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet {
    GENERATED_BODY()
public:
    UEditMeshPolygonsToolActions();

    UFUNCTION()
    void SimplifyByGroups();
    
    UFUNCTION()
    void Retriangulate();
    
    UFUNCTION()
    void RecalcNormals();
    
    UFUNCTION()
    void PushPull();
    
    UFUNCTION()
    void Outset();
    
    UFUNCTION()
    void Offset();
    
    UFUNCTION()
    void Merge();
    
    UFUNCTION()
    void Inset();
    
    UFUNCTION()
    void InsertEdgeLoop();
    
    UFUNCTION()
    void InsertEdge();
    
    UFUNCTION()
    void Flip();
    
    UFUNCTION()
    void Extrude();
    
    UFUNCTION()
    void Duplicate();
    
    UFUNCTION()
    void Disconnect();
    
    UFUNCTION()
    void Delete();
    
    UFUNCTION()
    void Decompose();
    
    UFUNCTION()
    void CutFaces();
    
    UFUNCTION()
    void Bevel();
    
};

