#pragma once
#include "CoreMinimal.h"
#include "ProceduralShapeToolProperties.h"
#include "ProceduralBoxToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UProceduralBoxToolProperties : public UProceduralShapeToolProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Width;
    
    UPROPERTY(EditAnywhere)
    float Depth;
    
    UPROPERTY(EditAnywhere)
    float Height;
    
    UPROPERTY(EditAnywhere)
    int32 WidthSubdivisions;
    
    UPROPERTY(EditAnywhere)
    int32 DepthSubdivisions;
    
    UPROPERTY(EditAnywhere)
    int32 HeightSubdivisions;
    
    UProceduralBoxToolProperties();

};

