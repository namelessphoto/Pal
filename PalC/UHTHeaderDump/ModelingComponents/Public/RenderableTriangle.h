#pragma once
#include "CoreMinimal.h"
#include "RenderableTriangleVertex.h"
#include "RenderableTriangle.generated.h"

class UMaterialInterface;

USTRUCT()
struct FRenderableTriangle {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaterialInterface* Material;
    
    UPROPERTY()
    FRenderableTriangleVertex Vertex0;
    
    UPROPERTY()
    FRenderableTriangleVertex Vertex1;
    
    UPROPERTY()
    FRenderableTriangleVertex Vertex2;
    
    MODELINGCOMPONENTS_API FRenderableTriangle();
};

