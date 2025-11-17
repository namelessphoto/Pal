#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ERevolvePropertiesPolygroupMode.h"
#include "ERevolvePropertiesQuadSplit.h"
#include "RevolveProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API URevolveProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    double RevolveDegreesClamped;
    
    UPROPERTY(EditAnywhere)
    double RevolveDegrees;
    
    UPROPERTY(EditAnywhere)
    double RevolveDegreesOffset;
    
    UPROPERTY(EditAnywhere)
    double StepsMaxDegrees;
    
    UPROPERTY(EditAnywhere)
    bool bExplicitSteps;
    
    UPROPERTY(EditAnywhere)
    int32 NumExplicitSteps;
    
    UPROPERTY(EditAnywhere)
    double HeightOffsetPerDegree;
    
    UPROPERTY(EditAnywhere)
    bool bReverseRevolutionDirection;
    
    UPROPERTY(EditAnywhere)
    bool bFlipMesh;
    
    UPROPERTY(EditAnywhere)
    bool bSharpNormals;
    
    UPROPERTY(EditAnywhere)
    double SharpNormalsDegreeThreshold;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bPathAtMidpointOfStep;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    ERevolvePropertiesPolygroupMode PolygroupMode;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    ERevolvePropertiesQuadSplit QuadSplitMode;
    
    URevolveProperties();

};

