#pragma once
#include "CoreMinimal.h"
#include "ProceduralShapeToolProperties.h"
#include "ProceduralTorusToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UProceduralTorusToolProperties : public UProceduralShapeToolProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MajorRadius;
    
    UPROPERTY(EditAnywhere)
    float MinorRadius;
    
    UPROPERTY(EditAnywhere)
    int32 MajorSlices;
    
    UPROPERTY(EditAnywhere)
    int32 MinorSlices;
    
    UProceduralTorusToolProperties();

};

