#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=EToolContextCoordinateSystem -FallbackName=EToolContextCoordinateSystem
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ELatticeInterpolationType.h"
#include "LatticeDeformerToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API ULatticeDeformerToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 XAxisResolution;
    
    UPROPERTY(EditAnywhere)
    int32 YAxisResolution;
    
    UPROPERTY(EditAnywhere)
    int32 ZAxisResolution;
    
    UPROPERTY(EditAnywhere)
    float Padding;
    
    UPROPERTY(EditAnywhere)
    ELatticeInterpolationType InterpolationType;
    
    UPROPERTY(EditAnywhere)
    bool bDeformNormals;
    
    UPROPERTY()
    bool bCanChangeResolution;
    
    UPROPERTY(EditAnywhere)
    EToolContextCoordinateSystem GizmoCoordinateSystem;
    
    UPROPERTY(EditAnywhere)
    bool bSetPivotMode;
    
    UPROPERTY(EditAnywhere)
    bool bSoftDeformation;
    
    ULatticeDeformerToolProperties();

    UFUNCTION()
    void Constrain();
    
    UFUNCTION()
    void ClearConstraints();
    
};

