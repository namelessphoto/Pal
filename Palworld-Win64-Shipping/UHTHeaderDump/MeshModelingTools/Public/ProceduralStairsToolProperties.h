#pragma once
#include "CoreMinimal.h"
#include "EProceduralStairsType.h"
#include "ProceduralShapeToolProperties.h"
#include "ProceduralStairsToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UProceduralStairsToolProperties : public UProceduralShapeToolProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EProceduralStairsType StairsType;
    
    UPROPERTY(EditAnywhere)
    int32 NumSteps;
    
    UPROPERTY(EditAnywhere)
    float StepWidth;
    
    UPROPERTY(EditAnywhere)
    float StepHeight;
    
    UPROPERTY(EditAnywhere)
    float StepDepth;
    
    UPROPERTY(EditAnywhere)
    float CurveAngle;
    
    UPROPERTY(EditAnywhere)
    float SpiralAngle;
    
    UPROPERTY(EditAnywhere)
    float InnerRadius;
    
    UProceduralStairsToolProperties();

};

