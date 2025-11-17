#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingOperators -ObjectName=ENormalCalculationMethod -FallbackName=ENormalCalculationMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingOperators -ObjectName=ESplitNormalMethod -FallbackName=ESplitNormalMethod
#include "EditNormalsToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UEditNormalsToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bRecomputeNormals;
    
    UPROPERTY(EditAnywhere)
    ENormalCalculationMethod NormalCalculationMethod;
    
    UPROPERTY(EditAnywhere)
    bool bFixInconsistentNormals;
    
    UPROPERTY(EditAnywhere)
    bool bInvertNormals;
    
    UPROPERTY(EditAnywhere)
    ESplitNormalMethod SplitNormalMethod;
    
    UPROPERTY(EditAnywhere)
    float SharpEdgeAngleThreshold;
    
    UPROPERTY(EditAnywhere)
    bool bAllowSharpVertices;
    
    UEditNormalsToolProperties();

};

