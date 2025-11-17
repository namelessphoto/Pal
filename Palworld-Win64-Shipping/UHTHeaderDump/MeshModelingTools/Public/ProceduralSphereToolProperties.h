#pragma once
#include "CoreMinimal.h"
#include "EProceduralSphereType.h"
#include "ProceduralShapeToolProperties.h"
#include "ProceduralSphereToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UProceduralSphereToolProperties : public UProceduralShapeToolProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    EProceduralSphereType SubdivisionType;
    
    UPROPERTY(EditAnywhere)
    int32 Subdivisions;
    
    UPROPERTY(EditAnywhere)
    int32 HorizontalSlices;
    
    UPROPERTY(EditAnywhere)
    int32 VerticalSlices;
    
    UProceduralSphereToolProperties();

};

