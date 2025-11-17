#pragma once
#include "CoreMinimal.h"
#include "EProceduralRectType.h"
#include "ProceduralShapeToolProperties.h"
#include "ProceduralRectangleToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UProceduralRectangleToolProperties : public UProceduralShapeToolProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EProceduralRectType RectangleType;
    
    UPROPERTY(EditAnywhere)
    float Width;
    
    UPROPERTY(EditAnywhere)
    float Depth;
    
    UPROPERTY(EditAnywhere)
    int32 WidthSubdivisions;
    
    UPROPERTY(EditAnywhere)
    int32 DepthSubdivisions;
    
    UPROPERTY(EditAnywhere)
    float CornerRadius;
    
    UPROPERTY(EditAnywhere)
    int32 CornerSlices;
    
    UProceduralRectangleToolProperties();

};

