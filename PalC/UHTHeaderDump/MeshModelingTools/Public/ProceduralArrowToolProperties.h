#pragma once
#include "CoreMinimal.h"
#include "ProceduralShapeToolProperties.h"
#include "ProceduralArrowToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UProceduralArrowToolProperties : public UProceduralShapeToolProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ShaftRadius;
    
    UPROPERTY(EditAnywhere)
    float ShaftHeight;
    
    UPROPERTY(EditAnywhere)
    float HeadRadius;
    
    UPROPERTY(EditAnywhere)
    float HeadHeight;
    
    UPROPERTY(EditAnywhere)
    int32 RadialSlices;
    
    UPROPERTY(EditAnywhere)
    int32 HeightSubdivisions;
    
    UProceduralArrowToolProperties();

};

