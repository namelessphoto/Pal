#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryFramework -ObjectName=MeshCommandChangeTarget -FallbackName=MeshCommandChangeTarget
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryFramework -ObjectName=MeshReplacementCommandChangeTarget -FallbackName=MeshReplacementCommandChangeTarget
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryFramework -ObjectName=MeshVertexCommandChangeTarget -FallbackName=MeshVertexCommandChangeTarget
#include "PreviewMesh.generated.h"

class UDynamicMeshComponent;

UCLASS(Transient)
class MODELINGCOMPONENTS_API UPreviewMesh : public UObject, public IMeshVertexCommandChangeTarget, public IMeshCommandChangeTarget, public IMeshReplacementCommandChangeTarget {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bBuildSpatialDataStructure;
    
protected:
    UPROPERTY(Instanced)
    UDynamicMeshComponent* DynamicMeshComponent;
    
public:
    UPreviewMesh();


    // Fix for true pure virtual functions not being implemented
};

