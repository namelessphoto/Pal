#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "MeshInspectorProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshInspectorProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bWireframe;
    
    UPROPERTY(EditAnywhere)
    bool bBoundaryEdges;
    
    UPROPERTY(EditAnywhere)
    bool bBowtieVertices;
    
    UPROPERTY(EditAnywhere)
    bool bPolygonBorders;
    
    UPROPERTY(EditAnywhere)
    bool bUVSeams;
    
    UPROPERTY(EditAnywhere)
    bool bUVBowties;
    
    UPROPERTY(EditAnywhere)
    bool bMissingUVs;
    
    UPROPERTY(EditAnywhere)
    bool bNormalSeams;
    
    UPROPERTY(EditAnywhere)
    bool bNormalVectors;
    
    UPROPERTY(EditAnywhere)
    bool bTangentVectors;
    
    UPROPERTY(EditAnywhere)
    float NormalLength;
    
    UPROPERTY(EditAnywhere)
    float TangentLength;
    
    UMeshInspectorProperties();

};

