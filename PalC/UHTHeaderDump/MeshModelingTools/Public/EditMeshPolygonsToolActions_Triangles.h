#pragma once
#include "CoreMinimal.h"
#include "EditMeshPolygonsToolActionPropertySet.h"
#include "EditMeshPolygonsToolActions_Triangles.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet {
    GENERATED_BODY()
public:
    UEditMeshPolygonsToolActions_Triangles();

    UFUNCTION()
    void RecalcNormals();
    
    UFUNCTION()
    void PushPull();
    
    UFUNCTION()
    void Poke();
    
    UFUNCTION()
    void Outset();
    
    UFUNCTION()
    void Offset();
    
    UFUNCTION()
    void Inset();
    
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
    void CutFaces();
    
};

