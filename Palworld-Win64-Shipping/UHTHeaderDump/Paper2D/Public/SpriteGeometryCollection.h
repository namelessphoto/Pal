#pragma once
#include "CoreMinimal.h"
#include "ESpritePolygonMode.h"
#include "SpriteGeometryShape.h"
#include "SpriteGeometryCollection.generated.h"

USTRUCT()
struct PAPER2D_API FSpriteGeometryCollection {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FSpriteGeometryShape> Shapes;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESpritePolygonMode> GeometryType;
    
    UPROPERTY(EditAnywhere)
    int32 PixelsPerSubdivisionX;
    
    UPROPERTY(EditAnywhere)
    int32 PixelsPerSubdivisionY;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bAvoidVertexMerging;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float AlphaThreshold;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float DetailAmount;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float SimplifyEpsilon;
    
    FSpriteGeometryCollection();
};

