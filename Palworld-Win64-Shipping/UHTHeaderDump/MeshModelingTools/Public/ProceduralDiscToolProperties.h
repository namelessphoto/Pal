#pragma once
#include "CoreMinimal.h"
#include "EProceduralDiscType.h"
#include "ProceduralShapeToolProperties.h"
#include "ProceduralDiscToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UProceduralDiscToolProperties : public UProceduralShapeToolProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EProceduralDiscType DiscType;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    int32 RadialSlices;
    
    UPROPERTY(EditAnywhere)
    int32 RadialSubdivisions;
    
    UPROPERTY(EditAnywhere)
    float HoleRadius;
    
    UProceduralDiscToolProperties();

};

